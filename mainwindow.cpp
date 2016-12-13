#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->combobox_filter_students->addItem("name");
    ui->combobox_filter_students->addItem("gender");
    ui->combobox_filter_students->addItem("bYear");
    ui->combobox_filter_students->addItem("dYear");
    ui->combobox_filter_students->addItem("nation");
    ui->comboBox_2->addItem("ASC");
    ui->comboBox_2->addItem("DESC");

    _service.openFiles();
    displayStudents();
    displayComputers();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayStudents()
{
    string input = ui->combobox_filter_students->currentText().toStdString();
    string input2 = ui->comboBox_2->currentText().toStdString();
    string input3 = ui->input_scientist_search->text().toStdString();
    vector<Performer> pf = _data.sortScientists(input, input2, input3);
    ui->table_Students->clearContents();
    ui->table_Students->setRowCount(pf.size());
    for(unsigned int row = 0; row < pf.size(); row++)
    {
        Performer currentScientist = pf[row];

        QString name = currentScientist.getName();
        QString gender = currentScientist.getGender();
        QString byear = currentScientist.getbYear();
        QString dyear = currentScientist.getdYear();
        QString nationality = currentScientist.getNation();

        ui->table_Students->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_Students->setItem(row, 1, new QTableWidgetItem(gender));
        ui->table_Students->setItem(row, 2, new QTableWidgetItem(byear));
        ui->table_Students->setItem(row, 3, new QTableWidgetItem(dyear));
        ui->table_Students->setItem(row, 4, new QTableWidgetItem(nationality));
    }
}

void MainWindow::displayComputers()
{
    vector<computers> pf = _data.displayComputers();
    ui->table_computers->clearContents();
    ui->table_computers->setRowCount(pf.size());
    for(unsigned int row = 0; row < pf.size(); row++)
    {
        computers currentComp = pf[row];

        QString name = currentComp.getName();
        QString byear = currentComp.getBuildy();
        QString brand = currentComp.getBrand();
        QString constr = currentComp.getConstr();

        ui->table_computers->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_computers->setItem(row, 1, new QTableWidgetItem(byear));
        ui->table_computers->setItem(row, 2, new QTableWidgetItem(brand));
        ui->table_computers->setItem(row, 3, new QTableWidgetItem(constr));

    }
}


void MainWindow::on_combobox_filter_students_activated()
{
    displayStudents();
}

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
    displayStudents();
}

void MainWindow::on_input_scientist_search_textChanged(const QString &arg1)
{
    displayStudents();
}
