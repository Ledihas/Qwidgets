#include "libdialog.h"
#include "ui_libdialog.h"

LibDialog::LibDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LibDialog)
{
    ui->setupUi(this);
}

LibDialog::~LibDialog()
{
    delete ui;
}

void LibDialog::on_buttonBox_accepted()
{
    accept();
}

int n = 0;

void LibDialog::on_buttonBox_rejected()
{
    reject();
    n = 1;
}

int LibDialog::cerrar()
{
    return n;
}

QString LibDialog::nombre() const
{
    return ui->nombre->text();
}
int LibDialog::tomo() const
{

    return ui->totmo->value();
}
int LibDialog::folio() const
{
    return ui->folio->value();
}

