#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QMainWindow>

namespace Ui {
class Signuppage;
}

class Signuppage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signuppage(QWidget *parent = nullptr);
    ~Signuppage();

private slots:
    void onSignupClicked(); // Add this line

private:
    Ui::Signuppage *ui;
    QString hashPassword(const QString &password);
};

#endif // SIGNUPPAGE_H
