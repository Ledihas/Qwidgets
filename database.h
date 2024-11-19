#ifndef DATABASE_H
#define DATABASE_H
#include <QString>

    void connectToDatabase();
    void InsertData(const QString &nombre, int edad, double salario);
    void InsertDataLibro(const QString &nombre, int tomo, int folio);
    void DeleteData(const QString &nombre);
    void DeleteDataLib(const QString &nombre);

#endif // DATABASE_H
