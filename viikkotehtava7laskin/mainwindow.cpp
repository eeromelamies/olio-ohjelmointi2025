#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegularExpression>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
     connect(ui->nappi1,&QPushButton::clicked,
            this,&MainWindow::handleClick1);
    connect(ui->nappi2,&QPushButton::clicked,
            this,&MainWindow::handleClick1);
     connect(ui->nappi3,&QPushButton::clicked,
             this,&MainWindow::handleClick1);
    connect(ui->nappi4,&QPushButton::clicked,
            this,&MainWindow::handleClick1);
     connect(ui->nappi5,&QPushButton::clicked,
             this,&MainWindow::handleClick1);
    connect(ui->nappi6,&QPushButton::clicked,
            this,&MainWindow::handleClick1);
     connect(ui->nappi7,&QPushButton::clicked,
             this,&MainWindow::handleClick1);
    connect(ui->nappi8,&QPushButton::clicked,
            this,&MainWindow::handleClick1);
     connect(ui->nappi9,&QPushButton::clicked,
             this,&MainWindow::handleClick1);
    connect(ui->nappi0,&QPushButton::clicked,
            this,&MainWindow::handleClick1);
     connect(ui->clearNappi,&QPushButton::clicked,
             this,&MainWindow::clearHandler);
    connect(ui->enterNappi,&QPushButton::clicked,
            this,&MainWindow::enterHandler);
     connect(ui->jakonappi2,&QPushButton::clicked,
             this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->plusnappi0,&QPushButton::clicked,
            this,&MainWindow::addSubMulDivClickHandler);
     connect(ui->miinusnappi1,&QPushButton::clicked,
             this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->kertonappi3,&QPushButton::clicked,
            this,&MainWindow::addSubMulDivClickHandler);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick1()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();


    qDebug()<<"napin nimi:"<<name;

    if(state == 0)
    {
        ui->laatikko1->setText(ui->laatikko1->text()+name.at(5));
    }
    else
    {
        ui->laatikko2->setText(ui->laatikko2->text()+name.at(5));
    }

}

void MainWindow::enterHandler()
{

    double result = 0;


    float ekaNumero = ui->laatikko1->text().toFloat();
    float tokaNumero = ui->laatikko2->text().toFloat();


    switch(operand)
    {
    case 0:
        result = ekaNumero + tokaNumero;
        break;
    case 1:
        result = ekaNumero - tokaNumero;
        break;
    case 2:
        result = ekaNumero / tokaNumero;
        break;

    case 3:
        result = ekaNumero * tokaNumero;
        break;
    }
    ui->laatikko3->setText(QString::number(result));

}

void MainWindow::clearHandler()
{

    ui->laatikko1->setText("");
    ui->laatikko2->setText("");
    ui->laatikko3->setText("");
    ui->laskulaatikko->setText("");
    state = 0;
    operand = -1;
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    // Poistetaan name stringistä kaikki muut, paitsi numerot
    name.remove(QRegularExpression("\\D"));
    // Tehdään namesta integer "merkki"
    operand = name.toInt();
    qDebug()<<operand;
    QString M;
    switch (operand)
    {
    case 0:
        M = "+";
        state = 1;
        break;

    case 1:
        M = "-";
        state = 1;
        break;

    case 2:
        M = "/";
        state = 1;
        break;

    case 3:
        M = "*";
        state = 1;
        break;

    }
    ui->laskulaatikko->setText(M);
}

void MainWindow::resetLineEdits()
{

}

