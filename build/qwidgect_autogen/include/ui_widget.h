/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QFrame *line;
    QTableWidget *tableWidget_Item_datas;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *boton;
    QPushButton *eliminar;
    QPushButton *Guardar_lib;
    QTableWidget *tableWidget;
    QPushButton *Guardar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        Widget->setCursor(QCursor(Qt::OpenHandCursor));
        Widget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:grey;\n"
"	border-radius:400px;\n"
"\n"
"}\n"
""));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        tableWidget_Item_datas = new QTableWidget(Widget);
        tableWidget_Item_datas->setObjectName(QString::fromUtf8("tableWidget_Item_datas"));
        tableWidget_Item_datas->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        tableWidget_Item_datas->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	color:red;\n"
"background-color:white;\n"
"	selection-color:blue;\n"
"	selection-background-color:green;\n"
"	font: 700 italic 17pt \"Z003\";\n"
"	gridline-color:blue;\n"
"}\n"
"QTableWidget::item:selected\n"
"{\n"
"	color:white;\n"
"	background-color:red;\n"
"	font: 700 italic 11pt \"Z003\";\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"	border:none;\n"
"	background-color:black;\n"
"	color:white;\n"
"	font: 700 italic 11pt \"Z003\";\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(tableWidget_Item_datas, 6, 0, 1, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman"));
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:blue;\n"
"\n"
"background-color:#FFFFCC;\n"
"border-radius:5px;\n"
"padding: 5px;\n"
"\n"
"}"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(779, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boton = new QPushButton(Widget);
        boton->setObjectName(QString::fromUtf8("boton"));
        boton->setCursor(QCursor(Qt::PointingHandCursor));
        boton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-family: Arial, sans-serif;\n"
"            margin: 5;\n"
"            padding:5;\n"
"	border-left-color: rgb(0, 0, 0);\n"
"            background-color:white;\n"
"            border-radius: 5px;\n"
"			  border-color:black;\n"
"	border-bottom-color: rgb(0, 0, 0);\n"
"			border-height: 10px;\n"
"            \n"
"\n"
"}"));

        horizontalLayout->addWidget(boton);

        eliminar = new QPushButton(Widget);
        eliminar->setObjectName(QString::fromUtf8("eliminar"));
        eliminar->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-family: Arial, sans-serif;\n"
"            margin: 5;\n"
"            padding:5;\n"
"	border-left-color: rgb(0, 0, 0);\n"
"            background-color:red;\n"
"            border-radius: 5px;\n"
"			  border-color:black;\n"
"	border-bottom-color: rgb(0, 0, 0);\n"
"			border-height: 10px;\n"
"            \n"
"\n"
"}"));

        horizontalLayout->addWidget(eliminar);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        Guardar_lib = new QPushButton(Widget);
        Guardar_lib->setObjectName(QString::fromUtf8("Guardar_lib"));
        Guardar_lib->setCursor(QCursor(Qt::PointingHandCursor));
        Guardar_lib->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:blue;\n"
"\n"
"background-color:#CCFFCC;\n"
"border-radius:5px;\n"
"padding: 5px;\n"
"\n"
"}"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::DocumentSave")));
        Guardar_lib->setIcon(icon);

        gridLayout->addWidget(Guardar_lib, 8, 0, 1, 1);

        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	color:red;\n"
"background-color:white;\n"
"	selection-color:blue;\n"
"	selection-background-color:green;\n"
"	font: 700 italic 17pt \"Z003\";\n"
"	gridline-color:blue;\n"
"}"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        Guardar = new QPushButton(Widget);
        Guardar->setObjectName(QString::fromUtf8("Guardar"));
        Guardar->setCursor(QCursor(Qt::PointingHandCursor));
        Guardar->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:blue;\n"
"\n"
"background-color:#CCFFCC;\n"
"border-radius:5px;\n"
"padding: 5px;\n"
"\n"
"}"));
        Guardar->setIcon(icon);
        Guardar->setCheckable(false);
        Guardar->setChecked(false);

        gridLayout->addWidget(Guardar, 3, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Agregar Libro", nullptr));
        boton->setText(QCoreApplication::translate("Widget", "Agregar persona", nullptr));
        eliminar->setText(QCoreApplication::translate("Widget", "Elimiinar persona de tabla", nullptr));
        Guardar_lib->setText(QCoreApplication::translate("Widget", "Guardar Tabla Libros", nullptr));
        Guardar->setText(QCoreApplication::translate("Widget", "Guardar Tabla Personas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
