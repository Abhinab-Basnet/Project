#include "placemanage.h"
#include "ui_placemanage.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QScrollArea>

Placemanage::Placemanage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Placemanage)
{
    ui->setupUi(this);
     connect(ui->btnGenerate, &QPushButton::clicked, this, &Placemanage::generatePlaceInputs);
}

Placemanage::~Placemanage()
{
    delete ui;
}
void Placemanage::generatePlaceInputs()
{
    // Clear old rows
    QLayoutItem *child;
    while ((child = ui->placesContainer->layout()->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    int count = ui->spinBoxPlaces->value();
    QVBoxLayout* containerLayout = qobject_cast<QVBoxLayout*>(ui->placesContainer->layout());

    for (int i = 0; i < count; ++i) {
        QHBoxLayout* rowLayout = new QHBoxLayout();

        QLineEdit* eventName = new QLineEdit();
        eventName->setPlaceholderText("Sub Event Name");

        QLineEdit* location = new QLineEdit();
        location->setPlaceholderText("Location");

        QLineEdit* time = new QLineEdit();
        time->setPlaceholderText("Time");

        QLineEdit* contact = new QLineEdit();
        contact->setPlaceholderText("Contact Person");

        rowLayout->addWidget(eventName);
        rowLayout->addWidget(location);
        rowLayout->addWidget(time);
        rowLayout->addWidget(contact);

        QWidget* rowWidget = new QWidget();
        rowWidget->setLayout(rowLayout);

        containerLayout->addWidget(rowWidget);
    }
}
