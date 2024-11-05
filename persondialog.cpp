#include "persondialog.h"
#include "ui_persondialog.h"
#include "QtSql/QSqlQuery"
#include "QDebug"
#include "QtSql/QSqlError"
#include "database.h"

PersonDialog::PersonDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonDialog)
{
    connectToDatabase();
    ui->setupUi(this);
}



PersonDialog::~PersonDialog()
{
    delete ui;
}

void PersonDialog::on_buttonBox_accepted()
{

    InsertData(nombre(),edad(),salario());
    qDebug() << nombre() << edad() << salario();
    accept();
}

int ne = 0;
void PersonDialog::on_buttonBox_rejected()
{
    reject();
    ne = 1;
}

int PersonDialog::cerrar()
{
    return ne;
}

QString PersonDialog::nombre() const
{

    return ui->nombre->text();

}
int PersonDialog:: edad() const
{

    return ui->edad->value();
}
double PersonDialog::salario() const
{

    return ui->salario->value();
}

void PersonDialog:: insertarPersona(const QString &nombre, const QString &edad, const QString salario) {
    QSqlQuery query;
    query.prepare("INSERT INTO usuarios (nombre, edad, salario) VALUES (:nombre, :edad, :salario)");
    query.bindValue(":nombre", nombre);
    query.bindValue(":edad", edad);
    query.bindValue(":salario", salario);
    if (!query.exec()) {
        qDebug() << "Error al insertar persona:" << query.lastError();
    }
}

