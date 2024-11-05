#ifndef DATABASE_H
#define DATABASE_H
#include <QString>

    void connectToDatabase();
    void InsertData(const QString &nombre, int edad, double salario);
    void DeleteData(const QString &nombre);

#endif // DATABASE_H
