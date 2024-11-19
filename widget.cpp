#include "widget.h"
#include "./ui_widget.h"
#include "persondialog.h"
#include "libdialog.h"
#include "QFileDialog"
#include "QTextStream"
#include "database.h"
#include "QtSql/QSqlQuery"
#include "QtSql/QSqlError"
#include "QtSql/QSqlDatabase"
#include "QDebug"
#include "eliminar.h"



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList titulos, titulos2;
    populateTableWidget();

    setWindowTitle("Aprendiendo Tablas");
    ui->tableWidget->setColumnCount(3);
    titulos << "Nombre" << "Edad" << "Salario";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);

    ui->tableWidget_Item_datas->setColumnCount(3);
    titulos2 << "Name" << "Tomo" << "Folio";
    ui->tableWidget_Item_datas->setHorizontalHeaderLabels(titulos2);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_boton_clicked()
{
    int res;
    QString nombre;
    int edad;
    double salario;
    PersonDialog pd(this);
    pd.setWindowTitle("Captura de persona");
    pd.exec();
    res = 1;
    if(res == pd.cerrar())
    {
        return;
    }
    nombre = pd.nombre();
    edad = pd.edad();
    salario = pd.salario();

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, NOMBRE,new QTableWidgetItem(nombre));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, EDAD,new QTableWidgetItem(QString::number(edad)));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, SALARIO,new QTableWidgetItem(QString::number(salario)));

    pd.cerrar();
}


void Widget::on_pushButton_clicked()
{
    int resp = 1, tomo, folio;
    QString nombre;
    LibDialog li(this);
    li.exec();
    if(resp == li.cerrar())
    {
        return;
    }
    nombre = li.nombre();
    tomo = li.tomo();
    folio = li.folio();

    ui->tableWidget_Item_datas->insertRow(ui->tableWidget_Item_datas->rowCount());
    ui->tableWidget_Item_datas->setItem(ui->tableWidget_Item_datas->rowCount() - 1, NAME,new QTableWidgetItem(nombre));
    ui->tableWidget_Item_datas->setItem(ui->tableWidget_Item_datas->rowCount() - 1, TOMO,new QTableWidgetItem(QString::number(tomo)));
    ui->tableWidget_Item_datas->setItem(ui->tableWidget_Item_datas->rowCount() - 1, FOLIO,new QTableWidgetItem(QString::number(folio)));

}


void saveTableToFile(QTableWidget *tableWidget, QWidget *parent) {
    // Abrir un diálogo para seleccionar la ubicación y el nombre del archivo
    QString fileName = QFileDialog::getSaveFileName(parent, "Guardar tabla", "", "Archivos de texto (*.txt);;Archivos de Excel (*.xlsx);;Todos los archivos (*)");

    if (fileName.isEmpty()) {
        return; // Si no se selecciona ningún archivo, salir de la función
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        // Manejar el error si no se puede abrir el archivo
        return;
    }

    QTextStream out(&file);

    // Recorrer las filas y columnas del QTableWidget
    for (int row = 0; row < tableWidget->rowCount(); ++row) {
        for (int column = 0; column < tableWidget->columnCount(); ++column) {
            QTableWidgetItem *item = tableWidget->item(row, column);
            if (item) {
                out << item->text() << ",\t"; // Escribir el texto del item en el archivo, separado por una coma y tabulación
            } else {
                out << "\t"; // Si el item es nulo, escribir una tabulación
            }
        }
        out << "\n"; // Nueva línea al final de cada fila
    }

    file.close(); // Cerrar el archivo
}

void crearTabla()
{
    connectToDatabase();
    QSqlQuery query;
    if (!query.exec("CREATE TABLE libro (nombre TEXT PRIMARY KEY, tomo INTEGER, folio INTEGER )")) qDebug() << "Hubo un fallo"<<query.lastError();
}

void Widget::on_Guardar_clicked()
{

    saveTableToFile(ui->tableWidget, this);
}


void Widget::on_Guardar_lib_clicked()
{
    saveTableToFile(ui->tableWidget_Item_datas, this);
}

void Widget::populateTableWidget() {
    // Limpiar el QTableWidget antes de llenarlo
    ui->tableWidget->setRowCount(0); // Limpia las filas existentes
    ui->tableWidget->setColumnCount(3); // Ajusta el número de columnas según tus datos
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Nombre" << "Edad" << "Salario"); // Nombres de las columnas

    // Conectar a la base de datos
    connectToDatabase(); // Asegúrate de que esta función esté definida en tu archivo database.cpp

    QSqlQuery query("SELECT nombre, edad, salario FROM personas");

    if (!query.exec()) {
        qDebug() << "Error al ejecutar la consulta:" << query.lastError().text();
        return;
    }

    // Llenar el QTableWidget con los resultados
    while (query.next()) {
        int row = ui->tableWidget->rowCount(); // Obtener el número actual de filas
        ui->tableWidget->insertRow(row); // Insertar una nueva fila

        // Establecer los valores en las celdas del QTableWidget
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString())); // Nombre
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(query.value(1).toInt()))); // Edad
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(query.value(2).toDouble()))); // Salario
    }
    ui->tableWidget_Item_datas->setRowCount(0); // Limpia las filas existentes
    ui->tableWidget_Item_datas->setColumnCount(3); // Ajusta el número de columnas según tus datos
    ui->tableWidget_Item_datas->setHorizontalHeaderLabels(QStringList() << "Nombre" << "Tomo" << "Folio"); // Nombres de las columnas

    // Conectar a la base de datos
    //connectToDatabase(); // Asegúrate de que esta función esté definida en tu archivo database.cpp

    QSqlQuery query1("SELECT nombre, tomo, folio FROM libro");

    if (!query1.exec()) {
        qDebug() << "Error al ejecutar la consulta:" << query1.lastError().text();
        return;
    }
    else {
        qDebug() << "Consulta correctamente ejecutada";
    }

    // Llenar el QTableWidget con los resultados
    while (query1.next()) {
        int row = ui->tableWidget_Item_datas->rowCount(); // Obtener el número actual de filas
        ui->tableWidget_Item_datas->insertRow(row); // Insertar una nueva fila

        // Establecer los valores en las celdas del QTableWidget
        ui->tableWidget_Item_datas->setItem(row, 0, new QTableWidgetItem(query1.value(0).toString())); // Nombre
        ui->tableWidget_Item_datas->setItem(row, 1, new QTableWidgetItem(QString::number(query1.value(1).toInt()))); // Edad
        ui->tableWidget_Item_datas->setItem(row, 2, new QTableWidgetItem(QString::number(query1.value(2).toInt()))); // Salario
    }
}



void Widget::on_eliminar_clicked()
{
    Eliminar eli;
    eli.exec();

    populateTableWidget();

}

