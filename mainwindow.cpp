#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_button_Push_clicked()
{
    ui->label_test->setText("Connection established");
    _service.openFiles();
}

void MainWindow::displayStudents()
{
    ui->table_Students->clearContents();

}
