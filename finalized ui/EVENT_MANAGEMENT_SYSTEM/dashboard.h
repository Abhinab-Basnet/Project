#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include<scheduling.h>

namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void on_Managing_clicked();

private:
    Ui::dashboard *ui;
    scheduling *Scheduling;
};

#endif // DASHBOARD_H
