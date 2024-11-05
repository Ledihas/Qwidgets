/********************************************************************************
** Form generated from reading UI file 'persondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONDIALOG_H
#define UI_PERSONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PersonDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *salario;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *nombre;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *edad;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PersonDialog)
    {
        if (PersonDialog->objectName().isEmpty())
            PersonDialog->setObjectName(QString::fromUtf8("PersonDialog"));
        PersonDialog->resize(401, 148);
        verticalLayout = new QVBoxLayout(PersonDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PersonDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        salario = new QDoubleSpinBox(PersonDialog);
        salario->setObjectName(QString::fromUtf8("salario"));
        salario->setMaximum(99990000.000000000000000);

        horizontalLayout_2->addWidget(salario);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(PersonDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        nombre = new QLineEdit(PersonDialog);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        horizontalLayout_3->addWidget(nombre);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(PersonDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        edad = new QSpinBox(PersonDialog);
        edad->setObjectName(QString::fromUtf8("edad"));

        horizontalLayout->addWidget(edad);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PersonDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PersonDialog);

        QMetaObject::connectSlotsByName(PersonDialog);
    } // setupUi

    void retranslateUi(QDialog *PersonDialog)
    {
        PersonDialog->setWindowTitle(QCoreApplication::translate("PersonDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("PersonDialog", "Salary", nullptr));
        label->setText(QCoreApplication::translate("PersonDialog", "Name", nullptr));
        nombre->setText(QCoreApplication::translate("PersonDialog", "Aqui va el nombre", nullptr));
        label_3->setText(QCoreApplication::translate("PersonDialog", "Age", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonDialog: public Ui_PersonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONDIALOG_H
