/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Switch;
    QPushButton *Switch2;
    QPushButton *Start;
    QPushButton *Stop;
    QPushButton *Lyhyt;
    QPushButton *Pitka;
    QLabel *Label;
    QProgressBar *p1bar;
    QProgressBar *p2bar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Switch = new QPushButton(centralwidget);
        Switch->setObjectName("Switch");
        Switch->setGeometry(QRect(60, 60, 80, 18));
        Switch2 = new QPushButton(centralwidget);
        Switch2->setObjectName("Switch2");
        Switch2->setGeometry(QRect(230, 60, 80, 18));
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(50, 180, 80, 18));
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        Stop->setGeometry(QRect(250, 180, 80, 18));
        Lyhyt = new QPushButton(centralwidget);
        Lyhyt->setObjectName("Lyhyt");
        Lyhyt->setGeometry(QRect(70, 130, 80, 18));
        Pitka = new QPushButton(centralwidget);
        Pitka->setObjectName("Pitka");
        Pitka->setGeometry(QRect(230, 130, 80, 18));
        Label = new QLabel(centralwidget);
        Label->setObjectName("Label");
        Label->setGeometry(QRect(90, 90, 211, 31));
        p1bar = new QProgressBar(centralwidget);
        p1bar->setObjectName("p1bar");
        p1bar->setGeometry(QRect(40, 30, 118, 23));
        p1bar->setValue(24);
        p2bar = new QProgressBar(centralwidget);
        p2bar->setObjectName("p2bar");
        p2bar->setGeometry(QRect(210, 30, 118, 23));
        p2bar->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Switch->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        Switch2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        Lyhyt->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        Pitka->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        Label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
