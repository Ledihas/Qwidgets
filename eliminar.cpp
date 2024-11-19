#include "eliminar.h"
#include "ui_eliminar.h"
#include "database.h"



Eliminar::Eliminar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Eliminar)
{
    ui->setupUi(this);

}

Eliminar::~Eliminar()
{
    delete ui;
}

void Eliminar::on_pushButton_clicked()
{

    if(ui->lineEdit->text().isEmpty())
    {}
    else{
    DeleteData(ui->lineEdit->text());

        close();

    }

}



void Eliminar::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {}
    else{
        DeleteDataLib(ui->lineEdit->text());

        close();

    }
}

