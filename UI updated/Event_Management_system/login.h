#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<signup.h>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_Gotosignup_clicked();

private:
    Ui::login *ui;
    Signup *sign_up;
};

#endif // LOGIN_H
