#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include "scheduling.h"

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private:
    Ui::Dashboard *ui;
    Scheduling *scheduling = nullptr;

private slots:
    void on_Managing_clicked();

};

#endif // DASHBOARD_H
