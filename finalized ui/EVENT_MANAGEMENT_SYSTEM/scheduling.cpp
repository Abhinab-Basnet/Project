#include "scheduling.h"
#include "ui_scheduling.h"
#include<placemanage.h>

scheduling::scheduling(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::scheduling)
{
    ui->setupUi(this);
}

scheduling::~scheduling()
{
    delete ui;
}

void scheduling::on_Gotodash_subevent_clicked()
{
    Placemanage=new placemanage(this);
    Placemanage->show();
}

