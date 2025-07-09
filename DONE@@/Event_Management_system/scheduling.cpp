#include "scheduling.h"
#include "ui_scheduling.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>
#include <QTime>
#include "sessionmanager.h"  // Ensure this is included
#include<placemanage.h>
#include<dashboard.h>

Scheduling::Scheduling(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Scheduling)
{
    ui->setupUi(this);

    // Connect the Save button
    connect(ui->Gotodash_subevent, &QPushButton::clicked, this, &Scheduling::on_Gotodash_subevent_clicked);
}

Scheduling::~Scheduling()
{
    delete ui;
}

void Scheduling::on_Gotodash_subevent_clicked()
{
    QString name = ui->Name->text().trimmed();
    QString venue = ui->Location->text().trimmed();
    QString date = ui->Date->text().trimmed();
    QString time = ui->Time->text().trimmed();
    QString contact = ui->Contact->text().trimmed();

    // Validate fields
    if (name.isEmpty() || venue.isEmpty() || date.isEmpty() || time.isEmpty() || contact.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QRegularExpression nameRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!nameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Invalid Name", "Please enter a valid Event name.");
        return;
    }

    QRegularExpression venueRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!venueRegex.match(venue).hasMatch()) {
        QMessageBox::warning(this, "Invalid Venue", "Please enter a valid Venue name.");
        return;
    }

    QTime parsedTime = QTime::fromString(time, "HH:mm");
    if (!parsedTime.isValid()) {
        QMessageBox::warning(this, "Invalid Time", "Time must be in HH:mm format (e.g., 10:00).");
        return;
    }

    QDate parsedDate = QDate::fromString(date, "yyyy/MM/dd");
    if (!parsedDate.isValid()) {
        QMessageBox::warning(this, "Invalid Date", "Date must be in yyyy/MM/dd format.");
        return;
    }

    QRegularExpression contactRegex("^(98|97)\\d{8}$");
    if (!contactRegex.match(contact).hasMatch()) {
        QMessageBox::warning(this, "Invalid Contact", "Contact number must start with 98 or 97 and be 10 digits.");
        return;
    }

    // Get logged-in user ID
    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }

    // Prepare and execute SQL query
    QSqlQuery query;
    query.prepare("INSERT INTO events (user_id, name, venue, date, time, organizer_contact) "
                  "VALUES (:user_id, :name, :venue, :date, :time, :contact)");
    query.bindValue(":user_id", userId);
    query.bindValue(":name", name);
    query.bindValue(":venue", venue);
    query.bindValue(":date", date);
    query.bindValue(":time", time);
    query.bindValue(":contact", contact);

    if (!query.exec()) {
        qDebug() << "Insert failed:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to save event: " + query.lastError().text());
    } else {
        QMessageBox::information(this, "Success", "Event scheduled successfully!");

        // Clear inputs
        ui->Name->clear();
        ui->Location->clear();
        ui->Date->clear();
        ui->Time->clear();
        ui->Contact->clear();

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this,
                                      "Manage Sub Event",
                                      "Do you want to manage sub event?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            place_manage=new Placemanage(this);
            place_manage->show();

        } else {
            place_manage=new Placemanage(this);
            place_manage->show();

        }
    }
}


