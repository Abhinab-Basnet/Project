#include "placemanage.h"
#include "ui_placemanage.h"

#include <QHBoxLayout>
#include <QLineEdit>
#include <QTimeEdit>
#include <QPushButton>

placemanage::placemanage(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::placemanage)
{
    ui->setupUi(this);

    // Ensure your QWidget in scroll area is named subEventContainer
    subEventLayout = new QVBoxLayout(ui->subEventContainer);

    // Connect buttons
    connect(ui->generateButton, &QPushButton::clicked, this, &placemanage::on_generateButton_clicked);
    connect(ui->addSubEventButton, &QPushButton::clicked, this, &placemanage::on_addSubEventButton_clicked);
}

placemanage::~placemanage()
{
    delete ui;
}

void placemanage::on_generateButton_clicked()
{
    bool ok;
    int count = ui->subEventCountInput->text().toInt(&ok);
    if (!ok || count <= 0) return;

    // Clear old widgets
    QLayoutItem *child;
    while ((child = subEventLayout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }

    for (int i = 0; i < count; ++i) {
        createSubEventForm();
    }
}

void placemanage::on_addSubEventButton_clicked()
{
    createSubEventForm();
}

void placemanage::createSubEventForm()
{
    QWidget *subEventWidget = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout(subEventWidget);

    // Create fields
    QLineEdit *nameEdit = new QLineEdit;
    nameEdit->setPlaceholderText("Sub-event Name");

    QLineEdit *locationEdit = new QLineEdit;
    locationEdit->setPlaceholderText("Location");

    QTimeEdit *timeEdit = new QTimeEdit;

    QLineEdit *contactEdit = new QLineEdit;
    contactEdit->setPlaceholderText("Contact Number");

    QPushButton *deleteButton = new QPushButton("Delete");

    // Set white text & placeholder style
    QString whiteStyle = "QLineEdit { color: white; background-color: #333; }"
                         "QLineEdit::placeholder { color: white; }";
    nameEdit->setStyleSheet(whiteStyle);
    locationEdit->setStyleSheet(whiteStyle);
    contactEdit->setStyleSheet(whiteStyle);
    timeEdit->setStyleSheet("color: white; background-color: #333;");

    // Add to layout
    layout->addWidget(nameEdit);
    layout->addWidget(locationEdit);
    layout->addWidget(timeEdit);
    layout->addWidget(contactEdit);
    layout->addWidget(deleteButton);

    // Add this row to layout
    subEventLayout->addWidget(subEventWidget);

    // Connect delete
    connect(deleteButton, &QPushButton::clicked, this, [=]() {
        removeSubEvent(subEventWidget);
    });
}

void placemanage::removeSubEvent(QWidget *subEventWidget)
{
    if (!subEventWidget) return;

    subEventLayout->removeWidget(subEventWidget);
    subEventWidget->setParent(nullptr);
    subEventWidget->deleteLater();
}
