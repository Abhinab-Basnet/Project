#include "login.h"
#include "ui_login.h"
#include<signup.h>
#include<dashboard.h>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_Gotosignup_clicked()
{
    sign_up=new signup(this);
    sign_up->show();
}


void login::on_Gotodash_clicked()
{
    dash_board=new dashboard(this);
    dash_board->show();
}

