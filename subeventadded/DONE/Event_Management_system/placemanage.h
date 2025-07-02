#ifndef PLACEMANAGE_H
#define PLACEMANAGE_H

#include <QMainWindow>

namespace Ui {
class Placemanage;
}

class Placemanage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Placemanage(QWidget *parent = nullptr);
    ~Placemanage();

private:
    Ui::Placemanage *ui;
    void generatePlaceInputs();
};

#endif // PLACEMANAGE_H
