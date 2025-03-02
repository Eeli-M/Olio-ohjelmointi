#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_player1Button_clicked();
    void on_player2Button_clicked();
    void on_time120Button_clicked();
    void on_time5Button_clicked();
    void on_startButton_clicked();
    void on_stopButton_clicked();

    void updateProgressBar();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer *timer = nullptr;
    void setGameInfoText(QString t, short f);
};
#endif // MAINWINDOW_H
