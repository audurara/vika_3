#include "performersproject.h"
#include "ui_performersproject.h"

Performersproject::Performersproject(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Performersproject)
{
    ui->setupUi(this);
}

Performersproject::~Performersproject()
{
    delete ui;
}
