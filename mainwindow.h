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
    void displayStudents();

    void on_combobox_filter_students_activated();

    void on_comboBox_2_activated(const QString &arg1);

    void on_input_scientist_search_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    PerformerService _service;
    DataAccess _data;

};

#endif // MAINWINDOW_H
