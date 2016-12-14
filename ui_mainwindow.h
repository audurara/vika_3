/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Scientists;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *input_scientist_search;
    QHBoxLayout *horizontalLayout;
    QComboBox *combobox_filter_students;
    QComboBox *comboBox_2;
    QTableWidget *table_Students;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *line_input_Computer_name;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_filte_Computers;
    QComboBox *comboBox_3;
    QTableWidget *table_computers;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_test;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(635, 412);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Scientists = new QWidget();
        Scientists->setObjectName(QStringLiteral("Scientists"));
        verticalLayout_2 = new QVBoxLayout(Scientists);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        input_scientist_search = new QLineEdit(Scientists);
        input_scientist_search->setObjectName(QStringLiteral("input_scientist_search"));

        verticalLayout_2->addWidget(input_scientist_search);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        combobox_filter_students = new QComboBox(Scientists);
        combobox_filter_students->setObjectName(QStringLiteral("combobox_filter_students"));

        horizontalLayout->addWidget(combobox_filter_students);

        comboBox_2 = new QComboBox(Scientists);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);


        verticalLayout_2->addLayout(horizontalLayout);

        table_Students = new QTableWidget(Scientists);
        if (table_Students->columnCount() < 5)
            table_Students->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_Students->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_Students->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_Students->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_Students->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_Students->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_Students->setObjectName(QStringLiteral("table_Students"));
        table_Students->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_Students->horizontalHeader()->setStretchLastSection(true);
        table_Students->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_Students->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(table_Students);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(Scientists);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Scientists);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(Scientists, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        line_input_Computer_name = new QLineEdit(tab);
        line_input_Computer_name->setObjectName(QStringLiteral("line_input_Computer_name"));

        verticalLayout_3->addWidget(line_input_Computer_name);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox_filte_Computers = new QComboBox(tab);
        comboBox_filte_Computers->setObjectName(QStringLiteral("comboBox_filte_Computers"));

        horizontalLayout_3->addWidget(comboBox_filte_Computers);

        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        table_computers = new QTableWidget(tab);
        if (table_computers->columnCount() < 4)
            table_computers->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        table_computers->setObjectName(QStringLiteral("table_computers"));
        table_computers->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(table_computers);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        label_test = new QLabel(centralWidget);
        label_test->setObjectName(QStringLiteral("label_test"));

        verticalLayout->addWidget(label_test);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        input_scientist_search->setPlaceholderText(QApplication::translate("MainWindow", "Search for a name ..", 0));
        QTableWidgetItem *___qtablewidgetitem = table_Students->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_Students->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_Students->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Birth year", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_Students->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Death year", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_Students->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Nationality", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Add Scientist", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Remove Scientist", 0));
        tabWidget->setTabText(tabWidget->indexOf(Scientists), QApplication::translate("MainWindow", "Scientists", 0));
        line_input_Computer_name->setPlaceholderText(QApplication::translate("MainWindow", "Search a Computer name ..", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Build year", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Constr", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Add Computer", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Remove Computer", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Computers", 0));
        label_test->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
