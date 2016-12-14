#ifndef ADDSCIENTISTDIALOG_H
#define ADDSCIENTISTDIALOG_H

#include <QDialog>
#include "performerservice.h"
#include "mainwindow.h"

namespace Ui {
class AddScientistDialog;
}

class AddScientistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddScientistDialog(QWidget *parent = 0);
    ~AddScientistDialog();

private slots:
    void on_Button_Cansel_Add_clicked();

    void on_Button_Add_Scientist_clicked();

private:
    Ui::AddScientistDialog *ui;
    PerformerService _service;
};

#endif // ADDSCIENTISTDIALOG_H
