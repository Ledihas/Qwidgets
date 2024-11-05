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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *boton;
    QTableWidget *tableWidget;
    QFrame *line;
    QPushButton *Guardar;
    QPushButton *pushButton;
    QTableWidget *tableWidget_Item_datas;
    QPushButton *Guardar_lib;

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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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

        verticalLayout->addWidget(boton);

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

        verticalLayout->addWidget(tableWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 0, 1, 2);

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
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::DocumentSave")));
        Guardar->setIcon(icon);
        Guardar->setCheckable(false);
        Guardar->setChecked(false);

        gridLayout->addWidget(Guardar, 5, 1, 1, 1);

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

        gridLayout->addWidget(pushButton, 3, 0, 1, 2);

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

        gridLayout->addWidget(tableWidget_Item_datas, 4, 0, 1, 2);

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
        Guardar_lib->setIcon(icon);

        gridLayout->addWidget(Guardar_lib, 5, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        boton->setText(QCoreApplication::translate("Widget", "Agregar", nullptr));
        Guardar->setText(QCoreApplication::translate("Widget", "Guardar Tabla Personas", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Agregar Libro", nullptr));
        Guardar_lib->setText(QCoreApplication::translate("Widget", "Guardar Tabla Libros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
