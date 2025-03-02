#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setGameTimeShort();
    void setGameTimeLong();
    void timeOutHandler();
    void startGameHandler();
    void stopGameHandler();
    void player1Turn();
    void player2Turn();




private:
    Ui::MainWindow *ui;
    QTimer * pQTimer;
    int player1;
    int player2;
    int gameTime;
    int currentPlayer;
    short operand;
};
#endif // MAINWINDOW_H
