#include "dashboard.h"
#include "ui_dashboard.h"

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
    this->close();
    if (!scheduling) { // avoid multiple windows
        scheduling = new Scheduling(this);
    }
    scheduling->show();
}
