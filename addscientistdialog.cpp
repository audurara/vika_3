#include "addscientistdialog.h"
#include "ui_addscientistdialog.h"

AddScientistDialog::AddScientistDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddScientistDialog)
{
    ui->setupUi(this);
}

AddScientistDialog::~AddScientistDialog()
{
    delete ui;
}

void AddScientistDialog::on_Button_Cansel_Add_clicked()
{
    this->done(0);
}

void AddScientistDialog::on_Button_Add_Scientist_clicked()
{
    string name = ui->Input_Scientist_name->text().toStdString();
    string gender = ui->Input_Scientist_Gender->text().toStdString();
    string birth = ui->Input_Scientist_Birth->text().toStdString();
    string death = ui->Input_Scientist_Death->text().toStdString();
    string nation = ui->Input_Scientist_Nationality->text().toStdString();
    _service.addPerformer(name, gender, birth, death, nation);
    this->done(0);
}
