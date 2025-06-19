#ifndef EVENT_H
#define EVENT_H

#include <QMainWindow>
#include<scheduling.h>

namespace Ui {
class Event;
}

class Event : public QMainWindow
{
    Q_OBJECT

public:
    explicit Event(QWidget *parent = nullptr);
    ~Event();

private slots:
    void on_pushButton_Schedule_clicked();

private:
    Ui::Event *ui;
    scheduling *Scheduling;
};

#endif // EVENT_H
