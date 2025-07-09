#ifndef SCHEDULING_H
#define SCHEDULING_H

#include <QMainWindow>

namespace Ui {
class Scheduling;
}

class Scheduling : public QMainWindow
{
    Q_OBJECT

public:
    explicit Scheduling(QWidget *parent = nullptr);
    ~Scheduling();
private slots:
    void on_Gotodashboard_clicked();

private:
    Ui::Scheduling *ui;
};

#endif // SCHEDULING_H
