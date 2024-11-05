/********************************************************************************
** Form generated from reading UI file 'eliminar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_H
#define UI_ELIMINAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Eliminar
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Eliminar)
    {
        if (Eliminar->objectName().isEmpty())
            Eliminar->setObjectName(QString::fromUtf8("Eliminar"));
        Eliminar->resize(410, 169);
        label = new QLabel(Eliminar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 361, 21));
        lineEdit = new QLineEdit(Eliminar);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 371, 26));
        pushButton = new QPushButton(Eliminar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 130, 88, 26));

        retranslateUi(Eliminar);

        QMetaObject::connectSlotsByName(Eliminar);
    } // setupUi

    void retranslateUi(QDialog *Eliminar)
    {
        Eliminar->setWindowTitle(QCoreApplication::translate("Eliminar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Eliminar", "Inserte el nombre del quien desea eliminar de la tabla", nullptr));
        pushButton->setText(QCoreApplication::translate("Eliminar", "Elimina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminar: public Ui_Eliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_H
