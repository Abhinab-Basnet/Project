#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include<signuppage.h>

namespace Ui {
class Loginpage;
}

class Loginpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginpage(QWidget *parent = nullptr);
    ~Loginpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Loginpage *ui;
    Signuppage *signup_page;
};

#endif // LOGINPAGE_H
