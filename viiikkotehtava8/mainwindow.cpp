#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

int state = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQTimer = new QTimer(this);


    ui->Label->setText("Choose game lenght!");


    connect(ui->Lyhyt,&QPushButton::clicked,this,&MainWindow::setGameTimeShort);
    connect(ui->Pitka,&QPushButton::clicked,this,&MainWindow::setGameTimeLong);
    connect(ui->Start,&QPushButton::clicked,this,&MainWindow::startGameHandler);
    connect(ui->Stop,&QPushButton::clicked,this,&MainWindow::stopGameHandler);
    connect(ui->Switch,&QPushButton::clicked,this,&MainWindow::player1Turn);
    connect(ui->Switch2,&QPushButton::clicked,this,&MainWindow::player2Turn);
    connect(pQTimer,&QTimer::timeout,this,&MainWindow::timeOutHandler);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setGameTimeShort()
{
    gameTime = 120;
    ui->p1bar->setRange(0,120);
    ui->p2bar->setRange(0,120);
    ui->Label->setText("You have choose short game!");
}

void MainWindow::setGameTimeLong()
{
    gameTime = 300;
    ui->p1bar->setRange(0,300);
    ui->p2bar->setRange(0,300);
    ui->Label->setText("You have choose long game!");
}

void MainWindow::timeOutHandler()
{
    if(currentPlayer==1)
    {
        player1--;
        ui->p1bar->setValue(player1);


        ui->Label->setText("Player 1 turn!");
        if(player1<=0)
        {
            pQTimer->stop();
            ui->Label->setText("Player 2 wins!");

        }
    }
    else
    {
        player2--;
        ui->p2bar->setValue(player2);
        ui->Label->setText("Player 2 turn!");
        if(player2 <=0)
        {
            pQTimer->stop();
            ui->Label->setText("Player 1 wins!");
        }

    }
    qDebug()<<"Player 1 time = "<<player1;
    qDebug()<<"Player 2 time = "<<player2;
}

void MainWindow::startGameHandler()
{
    player1 = gameTime;
    player2 = gameTime;
    ui->p1bar->setValue(gameTime);
    ui->p2bar->setValue(gameTime);
    currentPlayer=1;
    pQTimer->start(1000);

}

void MainWindow::stopGameHandler()
{
    player1 = 0;
    player2 = 0;
    ui->p1bar->setValue(0);
    ui->p2bar->setValue(0);
    pQTimer->stop();
    ui->Label->setText("Choose game lenght!");
}

void MainWindow::player1Turn()
{
    currentPlayer = 2;
}

void MainWindow::player2Turn()
{
    currentPlayer = 1;
}

