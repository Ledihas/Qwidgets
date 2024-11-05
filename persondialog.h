#ifndef PERSONDIALOG_H
#define PERSONDIALOG_H

#include <QDialog>

namespace Ui {
class PersonDialog;
}

class PersonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PersonDialog(QWidget *parent = nullptr);
    ~PersonDialog();
    QString nombre() const;
    int edad() const;
    double salario() const;
    int cerrar();

private slots:
    void on_buttonBox_accepted();
    void insertarPersona(const QString &nombre, const QString &edad, const QString salario);
    void on_buttonBox_rejected();

private:
    Ui::PersonDialog *ui;
};

#endif // PERSONDIALOG_H
