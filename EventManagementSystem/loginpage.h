#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>

// Forward declaration instead of include to avoid circular dependency
class Signuppage;

QT_BEGIN_NAMESPACE
namespace Ui {
class Loginpage;
}
QT_END_NAMESPACE

class Loginpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginpage(QWidget *parent = nullptr);
    ~Loginpage();

private slots:
    void onLoginClicked();   // For btnlogin
    void onSignupClicked();  // For pushButton

private:
    Ui::Loginpage *ui;
    Signuppage *signup_page;
    QString hashPassword(const QString &password);
};

#endif // LOGINPAGE_H
