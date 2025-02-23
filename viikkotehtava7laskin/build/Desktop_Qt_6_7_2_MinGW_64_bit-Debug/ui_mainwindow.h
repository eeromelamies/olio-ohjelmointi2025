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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *nappi8;
    QPushButton *jakonappi2;
    QPushButton *nappi2;
    QPushButton *enterNappi;
    QPushButton *nappi3;
    QHBoxLayout *horizontalLayout;
    QPushButton *nappi7;
    QPushButton *nappi9;
    QPushButton *nappi4;
    QPushButton *nappi0;
    QPushButton *nappi5;
    QPushButton *kertonappi3;
    QPushButton *nappi6;
    QPushButton *nappi1;
    QPushButton *clearNappi;
    QPushButton *miinusnappi1;
    QPushButton *plusnappi0;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *laatikko1;
    QLineEdit *laskulaatikko;
    QLineEdit *laatikko2;
    QLineEdit *laatikko3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 90, 340, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nappi8 = new QPushButton(gridLayoutWidget);
        nappi8->setObjectName("nappi8");

        gridLayout->addWidget(nappi8, 4, 2, 1, 1);

        jakonappi2 = new QPushButton(gridLayoutWidget);
        jakonappi2->setObjectName("jakonappi2");

        gridLayout->addWidget(jakonappi2, 4, 4, 1, 1);

        nappi2 = new QPushButton(gridLayoutWidget);
        nappi2->setObjectName("nappi2");

        gridLayout->addWidget(nappi2, 0, 2, 1, 1);

        enterNappi = new QPushButton(gridLayoutWidget);
        enterNappi->setObjectName("enterNappi");

        gridLayout->addWidget(enterNappi, 5, 3, 1, 1);

        nappi3 = new QPushButton(gridLayoutWidget);
        nappi3->setObjectName("nappi3");

        gridLayout->addWidget(nappi3, 0, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        nappi7 = new QPushButton(gridLayoutWidget);
        nappi7->setObjectName("nappi7");

        gridLayout->addWidget(nappi7, 4, 1, 1, 1);

        nappi9 = new QPushButton(gridLayoutWidget);
        nappi9->setObjectName("nappi9");

        gridLayout->addWidget(nappi9, 4, 3, 1, 1);

        nappi4 = new QPushButton(gridLayoutWidget);
        nappi4->setObjectName("nappi4");

        gridLayout->addWidget(nappi4, 2, 1, 1, 1);

        nappi0 = new QPushButton(gridLayoutWidget);
        nappi0->setObjectName("nappi0");

        gridLayout->addWidget(nappi0, 5, 1, 1, 1);

        nappi5 = new QPushButton(gridLayoutWidget);
        nappi5->setObjectName("nappi5");

        gridLayout->addWidget(nappi5, 2, 2, 1, 1);

        kertonappi3 = new QPushButton(gridLayoutWidget);
        kertonappi3->setObjectName("kertonappi3");

        gridLayout->addWidget(kertonappi3, 5, 4, 1, 1);

        nappi6 = new QPushButton(gridLayoutWidget);
        nappi6->setObjectName("nappi6");

        gridLayout->addWidget(nappi6, 2, 3, 1, 1);

        nappi1 = new QPushButton(gridLayoutWidget);
        nappi1->setObjectName("nappi1");

        gridLayout->addWidget(nappi1, 0, 1, 1, 1);

        clearNappi = new QPushButton(gridLayoutWidget);
        clearNappi->setObjectName("clearNappi");

        gridLayout->addWidget(clearNappi, 5, 2, 1, 1);

        miinusnappi1 = new QPushButton(gridLayoutWidget);
        miinusnappi1->setObjectName("miinusnappi1");

        gridLayout->addWidget(miinusnappi1, 2, 4, 1, 1);

        plusnappi0 = new QPushButton(gridLayoutWidget);
        plusnappi0->setObjectName("plusnappi0");

        gridLayout->addWidget(plusnappi0, 0, 4, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(110, 0, 251, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        laatikko1 = new QLineEdit(horizontalLayoutWidget_2);
        laatikko1->setObjectName("laatikko1");

        horizontalLayout_2->addWidget(laatikko1);

        laskulaatikko = new QLineEdit(horizontalLayoutWidget_2);
        laskulaatikko->setObjectName("laskulaatikko");

        horizontalLayout_2->addWidget(laskulaatikko);

        laatikko2 = new QLineEdit(horizontalLayoutWidget_2);
        laatikko2->setObjectName("laatikko2");

        horizontalLayout_2->addWidget(laatikko2);

        laatikko3 = new QLineEdit(horizontalLayoutWidget_2);
        laatikko3->setObjectName("laatikko3");

        horizontalLayout_2->addWidget(laatikko3);

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
        nappi8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        jakonappi2->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        nappi2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        enterNappi->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        nappi3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        nappi7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nappi9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        nappi4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        nappi0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        nappi5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        kertonappi3->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        nappi6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        nappi1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        clearNappi->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        miinusnappi1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plusnappi0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
