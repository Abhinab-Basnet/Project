#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<dashboard.h>

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
    void on_Gotologin_clicked();

    void on_Gotosignup_clicked();



    void on_Gotologin1_clicked();



    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
    Dashboard *dash_board;
};
#endif // MAINWINDOW_H
