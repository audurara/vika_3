#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "performerservice.h"

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

private:
    Ui::MainWindow *ui;
    PerformerService _service;

};

#endif // MAINWINDOW_H
