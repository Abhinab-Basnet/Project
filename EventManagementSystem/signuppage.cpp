#include "signuppage.h"
#include "ui_signuppage.h"

Signuppage::Signuppage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Signuppage)
{
    ui->setupUi(this);
}

Signuppage::~Signuppage()
{
    delete ui;
}
