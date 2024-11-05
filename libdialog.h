#ifndef LIBDIALOG_H
#define LIBDIALOG_H

#include <QDialog>

namespace Ui {
class LibDialog;
}

class LibDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LibDialog(QWidget *parent = nullptr);
    ~LibDialog();
    QString nombre() const;
    int tomo() const;
    int folio() const;
    int cerrar();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::LibDialog *ui;

};

#endif // LIBDIALOG_H
