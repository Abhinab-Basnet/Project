#include "signuppage.h"
#include "ui_signuppage.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDebug>
#include <QSqlError>


Signuppage::Signuppage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Signuppage)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Signuppage::onSignupClicked);
}

Signuppage::~Signuppage()
{
    delete ui;
}

QString Signuppage::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return hash.toHex();
}
void Signuppage::onSignupClicked()
{
    QString name = ui->lineEdit->text();
    QString email = ui->lineEdit_2->text();
    QString phone = ui->lineEdit_3->text();
    QString password = ui->lineEdit_4->text();

    if (name.isEmpty() || email.isEmpty() || phone.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QString hashedPassword = hashPassword(password);

    QSqlQuery query;
    query.prepare("INSERT INTO users (name, email, username, password, phone) "
                  "VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(name);
    query.addBindValue(email);
    query.addBindValue(email); // using email as username
    query.addBindValue(hashedPassword);
    query.addBindValue(phone);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        this->close(); // close the signup window
    } else {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
    }
}
