#ifndef PLACEMANAGE_H
#define PLACEMANAGE_H

#include <QMainWindow>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class placemanage; }
QT_END_NAMESPACE

class placemanage : public QMainWindow
{
    Q_OBJECT

public:
    explicit placemanage(QWidget *parent = nullptr);
    ~placemanage();

private slots:
    void on_generateButton_clicked();
    void on_addSubEventButton_clicked();
    void removeSubEvent(QWidget* subEventWidget);

private:
    Ui::placemanage *ui;
    QVBoxLayout *subEventLayout;

    void createSubEventForm();
};

#endif // PLACEMANAGE_H
