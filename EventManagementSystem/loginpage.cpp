#include "loginpage.h"
#include "ui_loginpage.h"
#include "signuppage.h"
#include "dashboard.h"
#include "sessionmanager.h"  // 👈 Added

#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QSqlError>
#include <QDebug>

Loginpage::Loginpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Loginpage)
{
    ui->setupUi(this);

    connect(ui->btnlogin, &QPushButton::clicked, this, &Loginpage::onLoginClicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &Loginpage::onSignupClicked);
}

Loginpage::~Loginpage()
{
    delete ui;
}

QString Loginpage::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return hash.toHex();
}

void Loginpage::onLoginClicked()
{
    QString username = ui->txtemail->text().trimmed();
    QString password = ui->txtpassword->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter email and password");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(hashPassword(password));

    if (query.exec() && query.next()) {
        int userId = query.value(0).toInt();  //  Get user ID
        SessionManager::instance().setUserId(userId);  // Save user ID in session

        Dashboard *dashboard = new Dashboard();
        dashboard->show();

        this->close();  // Close login window
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials");
    }
}

void Loginpage::onSignupClicked()
{
    Signuppage *signup = new Signuppage(this);
    signup->show();
}
