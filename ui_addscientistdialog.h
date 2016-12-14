/********************************************************************************
** Form generated from reading UI file 'addscientistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCIENTISTDIALOG_H
#define UI_ADDSCIENTISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddScientistDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *Label_Scientist_Name;
    QLineEdit *Input_Scientist_name;
    QLabel *Label_Scientist_Gender;
    QLineEdit *Inpu_Scientist_Gender;
    QLabel *Label_Scientist_BirthYear;
    QLineEdit *Input_Scientist_Birth;
    QLabel *Label_Scientist_DeathYear;
    QLineEdit *Input_Scientist_Death;
    QLabel *Label_Scientist_Nationality;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_Add_Scientist;
    QPushButton *Button_Cansel_Add;

    void setupUi(QDialog *AddScientistDialog)
    {
        if (AddScientistDialog->objectName().isEmpty())
            AddScientistDialog->setObjectName(QStringLiteral("AddScientistDialog"));
        AddScientistDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AddScientistDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Label_Scientist_Name = new QLabel(AddScientistDialog);
        Label_Scientist_Name->setObjectName(QStringLiteral("Label_Scientist_Name"));

        verticalLayout_2->addWidget(Label_Scientist_Name);

        Input_Scientist_name = new QLineEdit(AddScientistDialog);
        Input_Scientist_name->setObjectName(QStringLiteral("Input_Scientist_name"));

        verticalLayout_2->addWidget(Input_Scientist_name);

        Label_Scientist_Gender = new QLabel(AddScientistDialog);
        Label_Scientist_Gender->setObjectName(QStringLiteral("Label_Scientist_Gender"));

        verticalLayout_2->addWidget(Label_Scientist_Gender);

        Inpu_Scientist_Gender = new QLineEdit(AddScientistDialog);
        Inpu_Scientist_Gender->setObjectName(QStringLiteral("Inpu_Scientist_Gender"));

        verticalLayout_2->addWidget(Inpu_Scientist_Gender);

        Label_Scientist_BirthYear = new QLabel(AddScientistDialog);
        Label_Scientist_BirthYear->setObjectName(QStringLiteral("Label_Scientist_BirthYear"));

        verticalLayout_2->addWidget(Label_Scientist_BirthYear);

        Input_Scientist_Birth = new QLineEdit(AddScientistDialog);
        Input_Scientist_Birth->setObjectName(QStringLiteral("Input_Scientist_Birth"));

        verticalLayout_2->addWidget(Input_Scientist_Birth);

        Label_Scientist_DeathYear = new QLabel(AddScientistDialog);
        Label_Scientist_DeathYear->setObjectName(QStringLiteral("Label_Scientist_DeathYear"));

        verticalLayout_2->addWidget(Label_Scientist_DeathYear);

        Input_Scientist_Death = new QLineEdit(AddScientistDialog);
        Input_Scientist_Death->setObjectName(QStringLiteral("Input_Scientist_Death"));

        verticalLayout_2->addWidget(Input_Scientist_Death);

        Label_Scientist_Nationality = new QLabel(AddScientistDialog);
        Label_Scientist_Nationality->setObjectName(QStringLiteral("Label_Scientist_Nationality"));

        verticalLayout_2->addWidget(Label_Scientist_Nationality);

        lineEdit = new QLineEdit(AddScientistDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_Add_Scientist = new QPushButton(AddScientistDialog);
        Button_Add_Scientist->setObjectName(QStringLiteral("Button_Add_Scientist"));

        horizontalLayout->addWidget(Button_Add_Scientist);

        Button_Cansel_Add = new QPushButton(AddScientistDialog);
        Button_Cansel_Add->setObjectName(QStringLiteral("Button_Cansel_Add"));

        horizontalLayout->addWidget(Button_Cansel_Add);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AddScientistDialog);

        QMetaObject::connectSlotsByName(AddScientistDialog);
    } // setupUi

    void retranslateUi(QDialog *AddScientistDialog)
    {
        AddScientistDialog->setWindowTitle(QApplication::translate("AddScientistDialog", "Dialog", 0));
        Label_Scientist_Name->setText(QApplication::translate("AddScientistDialog", "Name", 0));
        Label_Scientist_Gender->setText(QApplication::translate("AddScientistDialog", "Gender", 0));
        Label_Scientist_BirthYear->setText(QApplication::translate("AddScientistDialog", "Birth Year", 0));
        Label_Scientist_DeathYear->setText(QApplication::translate("AddScientistDialog", "Death year", 0));
        Label_Scientist_Nationality->setText(QApplication::translate("AddScientistDialog", "Nationality", 0));
        Button_Add_Scientist->setText(QApplication::translate("AddScientistDialog", "Submit", 0));
        Button_Cansel_Add->setText(QApplication::translate("AddScientistDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientistDialog: public Ui_AddScientistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTISTDIALOG_H
