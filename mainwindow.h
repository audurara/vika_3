#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "performerservice.h"
#include "dataaccess.h"
#include <QtSql>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button_Push_clicked();
    void displayStudents();

    void on_button_fin_students_clicked();

private:
    Ui::MainWindow *ui;
    PerformerService _service;
    DataAccess _data;

};

#endif // MAINWINDOW_H
