#include "dashboard.h"
#include "ui_dashboard.h"
#include<QMessageBox>

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_Managing_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Dashboard::on_Save_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Manage Place","Do you want to manage place in your event?",QMessageBox::Yes |QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else{
        ui->stackedWidget->setCurrentIndex(0);

    }
}

