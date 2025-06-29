#include "login.h"
#include "ui_login.h"  // include generated UI header
#include "signup.h"
#include "dashboard.h"
#include "sessionmanager.h"
#include "database.h"
#include <QMessageBox>
#include <QCryptographicHash>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)  // lowercase here, must match Ui::login
{
    ui->setupUi(this);

    // Connect signals to slots
    connect(ui->Gotodash, &QPushButton::clicked, this, &Login::onLoginClicked);
    connect(ui->Gotosignup, &QPushButton::clicked, this, &Login::onSignupClicked);
}

Login::~Login()
{
    delete ui;
}

QString Login::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return hash.toHex();
}

void Login::onLoginClicked()
{
    QString username = ui->Emailid->text().trimmed();
    QString password = ui->Password->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter email and password");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(hashPassword(password));

    if (query.exec() && query.next()) {
        int userId = query.value(0).toInt();
        SessionManager::instance().setUserId(userId);

        Dashboard *dashboard = new Dashboard();
        dashboard->show();

        this->close();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials");
    }
}

void Login::onSignupClicked()
{
    Signup *sign_up = new Signup(this);
    sign_up->show();
}
