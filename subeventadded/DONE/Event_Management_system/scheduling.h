#ifndef SCHEDULING_H
#define SCHEDULING_H

#include <QMainWindow>
#include<placemanage.h>


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
    void on_Gotodash_subevent_clicked();



private:
    Ui::Scheduling *ui;
    Placemanage *place_manage;

};

#endif // SCHEDULING_H
