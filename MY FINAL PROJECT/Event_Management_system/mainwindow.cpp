#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Gotologin_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Gotosignup_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}






void MainWindow::on_Gotologin1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}






void MainWindow::on_Login_clicked()
{
    dash_board=new Dashboard(this);
    dash_board->show();
}

