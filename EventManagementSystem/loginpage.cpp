#include "loginpage.h"
#include "ui_loginpage.h"

Loginpage::Loginpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Loginpage)
{
    ui->setupUi(this);
}

Loginpage::~Loginpage()
{
    delete ui;
}

void Loginpage::on_pushButton_clicked()
{
    signup_page=new Signuppage(this);
    signup_page->show();
}

