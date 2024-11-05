#include "QtSql/QSqlDatabase"
#include "QtSql/QSqlQuery"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include "qdebug.h"

#include <QMessageBox>


void connectToDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("baseD.db"); // Ruta a tu archivo SQLite

    if (!db.open()) {
        QMessageBox::warning(nullptr, "Error", "No se pudo conectar a la base de datos.");
        return;
    }

    qDebug() << "Conexión a SQLite establecida.";
}

void InsertData(const QString &nombre, int edad, double salario) {
    // Crear o abrir la base de datos
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("baseD.db"); // Nombre del archivo de la base de datos

    if (!db.open()) {
        qDebug() << "No se pudo abrir la base de datos.";
        return;
    }

    qDebug() << "Conexión a SQLite establecida.";

    // Crear una tabla si no existe
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS personas ("
               "nombre TEXT PRIMARY KEY, "
               "edad INTEGER, "
               "salario NUMERIC)");

    // Preparar la inserción de datos
    query.prepare("INSERT INTO personas (nombre, edad, salario) VALUES (:nombre, :edad, :salario)");
    query.bindValue(":nombre", nombre);
    query.bindValue(":edad", edad);
    query.bindValue(":salario", salario);
    //qDebug()<< "Eninsertar data: " << nombre << edad << salario;

    // Ejecutar la inserción
    if (query.exec()) {
        qDebug() << "Datos insertados correctamente.";
    } else {
        qDebug() << "Error al insertar datos:" << query.lastError().text();
    }

    db.close(); // Cerrar la conexión
}
void DeleteData(const QString &nombre) {
    // Crear o abrir la base de datos
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("baseD.db"); // Nombre del archivo de la base de datos

    if (!db.open()) {
        qDebug() << "No se pudo abrir la base de datos.";
        return;
    }

    qDebug() << "Conexión a SQLite establecida.";

    // Crear una tabla si no existe
    QSqlQuery query;


    // Preparar la inserción de datos
    query.prepare("DELETE FROM personas WHERE nombre = :nombre ");
    query.bindValue(":nombre", nombre);



    // Ejecutar laeliminacion
    if (query.exec()) {
        qDebug() << "Datos eliminados correctamente.";
    } else {
        qDebug() << "Error al eliminar datos:" << query.lastError().text();
    }




    db.close(); // Cerrar la conexión
}
