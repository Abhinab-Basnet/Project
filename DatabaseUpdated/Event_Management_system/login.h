#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class login;  // lowercase 'login' to match ui_login.h
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void onLoginClicked();
    void onSignupClicked();

private:
    Ui::login *ui;  // match lowercase here
    QString hashPassword(const QString &password);
};

#endif // LOGIN_H
