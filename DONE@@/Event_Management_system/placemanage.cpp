#include "placemanage.h"
#include "ui_placemanage.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QScrollArea>
#include <database.h>
#include <QMessageBox>

Placemanage::Placemanage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Placemanage)
{
    ui->setupUi(this);
     connect(ui->btnGenerate, &QPushButton::clicked, this, &Placemanage::generatePlaceInputs);
    connect(ui->btnGenerate, &QPushButton::clicked, this, &Placemanage::savePlaceToDatabase);
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
    void Placemanage::savePlaceToDatabase()
    {
        if (eventId == -1)
        {
            QMessageBox::warning(this, "Missing event id","Event id is not set");
                return ;
        }
        QVBoxLayout* containerLayout = qobject_cast<QVBoxLayout*>(ui->placesContainer->layout());
        if (!containerLayout) return;

        QSqlQuery query;
        int successCount = 0;

        for (int i = 0; i < containerLayout->count(); ++i) {
            QWidget* rowWidget = containerLayout->itemAt(i)->widget();
            if (!rowWidget) continue;

            QList<QLineEdit*> edits = rowWidget->findChildren<QLineEdit*>();
            if (edits.size() < 4) continue;

            QString subEventName = edits[0]->text().trimmed();
            QString location = edits[1]->text().trimmed();
            QString time = edits[2]->text().trimmed();
            QString contact = edits[3]->text().trimmed();

            if(subEventName.isEmpty()||location.isEmpty()||time.isEmpty()||contact.isEmpty())
            {
                QMessageBox::warning(this, "Input Error", QString("Please fill all fields in row %1").arg(i + 1));
                return;
            }
            query.prepare("INSERT INTO places(event_id, sub_event_name,location,time,contact_person)"
                          "VALUES (?,?,?,?,?");
            query.addBindValue(eventId);
            query.addBindValue(subEventName);
            query.addBindValue(location);
            query.addBindValue(time);
            query.addBindValue(contact);

            if(!query.exec())
            {
                qDebug() << "Insert failed for row" << i << ":" << query.lastError().text();
                continue;
            }
            successCount++;
    }
        if (successCount > 0)
            QMessageBox::information(this, "Success", QString("%1 place(s) saved successfully.").arg(successCount));
        else
            QMessageBox::warning(this, "No Data Saved", "No valid place data to save.");
    }

