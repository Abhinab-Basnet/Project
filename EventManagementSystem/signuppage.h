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

private:
    Ui::Signuppage *ui;
};

#endif // SIGNUPPAGE_H
