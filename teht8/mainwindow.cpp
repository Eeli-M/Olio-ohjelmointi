#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->startButton->setEnabled(false);
    ui->stopButton->setEnabled(false);
    ui->player1Button->setEnabled(false);
    ui->player2Button->setEnabled(false);

    setGameInfoText("Select game time and press 'START GAME'", 10);
}

MainWindow::~MainWindow()
{
    if(timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_player1Button_clicked()
{
    currentPlayer = 2;
    ui->player1Button->setEnabled(false);
    ui->player2Button->setEnabled(true);
    setGameInfoText("Player 2 turn", 10);
}


void MainWindow::on_player2Button_clicked()
{
    currentPlayer = 1;
    ui->player2Button->setEnabled(false);
    ui->player1Button->setEnabled(true);
    setGameInfoText("Player 1 turn", 10);
}


void MainWindow::on_time120Button_clicked()
{
    gameTime = 120;
    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    ui->startButton->setEnabled(true);

    setGameInfoText("120 seconds selected press 'START GAME'", 12);
}


void MainWindow::on_time5Button_clicked()
{
    gameTime = 300;
    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    ui->startButton->setEnabled(true);

    setGameInfoText("5 minutes selected, press 'START GAME'", 12);
}


void MainWindow::on_startButton_clicked()
{
    ui->startButton->setEnabled(false);
    ui->stopButton->setEnabled(true);
    ui->time120Button->setEnabled(false);
    ui->time5Button->setEnabled(false);
    ui->player1Button->setEnabled(true);

    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();

    setGameInfoText("Game started", 13);
}


void MainWindow::on_stopButton_clicked()
{
    ui->startButton->setEnabled(true);
    ui->time120Button->setEnabled(true);
    ui->time5Button->setEnabled(true);
    ui->player1Button->setEnabled(false);
    ui->player2Button->setEnabled(false);

    setGameInfoText("Game stopped", 14);

    if(timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1) {
        p1Time--;
        ui->progressBar->setValue(p1Time);
        if(p1Time == 0) {
            setGameInfoText("Time's out! Player 1 lost", 14);
            if(timer) {
                timer->stop();
                delete timer;
                timer = nullptr;
            }
        }
    } else if(currentPlayer == 2) {
        p2Time--;
        ui->progressBar_2->setValue(p2Time);
        if(p2Time == 0) {
            setGameInfoText("Time's out! Player 2 lost!", 14);
            if(timer) {
                timer->stop();
                delete timer;
                timer = nullptr;
            }
        }
    }
}

void MainWindow::setGameInfoText(QString t, short f)
{
    QFont font = ui->label->font();
    font.setPointSize(f);
    ui->label->setFont(font);
    ui->label->setText(t);
    ui->label->setAlignment(Qt::AlignCenter);
}

