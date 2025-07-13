#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<signup.h>
#include<dashboard.h>
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

    void on_Gotodash_clicked();

private:
    Ui::login *ui;
    signup *sign_up;
    dashboard *dash_board;
};

#endif // LOGIN_H
