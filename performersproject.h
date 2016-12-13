#ifndef PERFORMERSPROJECT_H
#define PERFORMERSPROJECT_H

#include <QMainWindow>

namespace Ui {
class Performersproject;
}

class Performersproject : public QMainWindow
{
    Q_OBJECT

public:
    explicit Performersproject(QWidget *parent = 0);
    ~Performersproject();

private:
    Ui::Performersproject *ui;
};

#endif // PERFORMERSPROJECT_H
