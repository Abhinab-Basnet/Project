#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

namespace Ui {
class Signup;
}

class Signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void onSignupClicked(); // Add this line

private:
    Ui::Signup *ui;
    QString hashPassword(const QString &password);
};

#endif // SIGNUPPAGE_H
