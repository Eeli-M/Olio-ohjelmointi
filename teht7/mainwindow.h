#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    /* void on_countButton_clicked();
    void on_resetButton_clicked(); */

    void on_add_clicked();
    void on_sub_clicked();
    void on_mul_clicked();
    void on_div_clicked();
    void on_N1_clicked();
    void on_N0_clicked();
    void on_N2_clicked();
    void on_N3_clicked();
    void on_N4_clicked();
    void on_N5_clicked();
    void on_N6_clicked();
    void on_N7_clicked();
    void on_N8_clicked();
    void on_N9_clicked();
    void on_clear_clicked();
    void on_enter_clicked();

private:
    void numberClickHandler(int n);
    void setActiveControls();

    Ui::MainWindow *ui;

    int state = 1;
    float result;
    short operand;
};
#endif // MAINWINDOW_H
