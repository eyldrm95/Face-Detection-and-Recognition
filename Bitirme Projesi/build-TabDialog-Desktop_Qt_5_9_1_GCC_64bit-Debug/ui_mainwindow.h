/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QWidget *tab_2;
    QLabel *label_2;
    QPushButton *addPerson;
    QPushButton *addImages;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *tab_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *personName;
    QLabel *personSurname;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 1000);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(8, 8, 1000, 1000));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 12, 640, 480));
        label->setAutoFillBackground(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(8, 8, 640, 480));
        label_2->setAutoFillBackground(true);
        addPerson = new QPushButton(tab_2);
        addPerson->setObjectName(QStringLiteral("addPerson"));
        addPerson->setGeometry(QRect(12, 524, 100, 40));
        addImages = new QPushButton(tab_2);
        addImages->setObjectName(QStringLiteral("addImages"));
        addImages->setGeometry(QRect(12, 576, 100, 40));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(116, 524, 100, 40));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(660, 8, 200, 200));
        label_5->setAutoFillBackground(true);
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(248, 524, 100, 40));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 12, 640, 480));
        label_3->setAutoFillBackground(true);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(660, 16, 200, 200));
        label_4->setAutoFillBackground(true);
        personName = new QLabel(tab_3);
        personName->setObjectName(QStringLiteral("personName"));
        personName->setGeometry(QRect(660, 244, 100, 17));
        personSurname = new QLabel(tab_3);
        personSurname->setObjectName(QStringLiteral("personSurname"));
        personSurname->setGeometry(QRect(660, 280, 100, 17));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">This is main window</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        addPerson->setText(QApplication::translate("MainWindow", "Add Person", Q_NULLPTR));
        addImages->setText(QApplication::translate("MainWindow", "Add Image", Q_NULLPTR));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Train", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Training", Q_NULLPTR));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">This is training page</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QString());
        personName->setText(QApplication::translate("MainWindow", "NAME:", Q_NULLPTR));
        personSurname->setText(QApplication::translate("MainWindow", "SURNAME:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Recognition", Q_NULLPTR));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">This is recognition page</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
