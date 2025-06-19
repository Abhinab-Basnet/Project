#ifndef SCHEDULING_H
#define SCHEDULING_H

#include <QMainWindow>

namespace Ui {
class scheduling;
}

class scheduling : public QMainWindow
{
    Q_OBJECT

public:
    explicit scheduling(QWidget *parent = nullptr);
    ~scheduling();
private slots:
    void saveEvent();

private:
    Ui::scheduling *ui;
};

#endif // SCHEDULING_H
