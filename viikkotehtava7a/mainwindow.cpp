#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //handleClick();
    connect(ui->nappi,&QPushButton::clicked,
            this,&MainWindow::handleClick);

    //resetClick();
    connect(ui->resetNappi,&QPushButton::clicked,
            this,&MainWindow::resetClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    counter++;
    QString teksti = QString::number(counter);
    ui->tekstilaatikko->setText(teksti);
}

void MainWindow::resetClick()
{
    counter = 0;
    QString teksti = QString::number(counter);
    ui->tekstilaatikko->setText(teksti);

}
