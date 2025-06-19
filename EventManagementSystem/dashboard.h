#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include<event.h>

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_pushButton_Event_clicked();

private:
    Ui::Dashboard *ui;
    Event *event;
};

#endif // DASHBOARD_H
