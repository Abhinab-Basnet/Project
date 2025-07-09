#include "scheduling.h"
#include "ui_scheduling.h"
#include "sessionmanager.h"  //  To track logged-in user

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

scheduling::scheduling(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::scheduling)
{
    ui->setupUi(this);

    // Connect Save button to saveEvent slot
    connect(ui->pushButton_save, &QPushButton::clicked, this, &scheduling::saveEvent);
}

scheduling::~scheduling()
{
    delete ui;
}

void scheduling::saveEvent()
{
    // Read inputs from form
    QString name = ui->lineEdit_Name->text().trimmed();
    QString venue = ui->lineEdit_venue->text().trimmed();
    QString date = ui->lineEdit_date->text().trimmed();
    QString time = ui->lineEdit_time->text().trimmed();
    QString contact = ui->lineEdit_time_2->text().trimmed();

    // Validate inputs
    if (name.isEmpty() || venue.isEmpty() || date.isEmpty() || time.isEmpty() || contact.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    // Get logged-in user ID
    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }

    // Prepare SQL query
    QSqlQuery query;
    query.prepare("INSERT INTO events (user_id, name, venue, date, time, organizer_contact) "
                  "VALUES (:user_id, :name, :venue, :date, :time, :contact)");

    // Bind values
    query.bindValue(":user_id", userId);
    query.bindValue(":name", name);
    query.bindValue(":venue", venue);
    query.bindValue(":date", date);
    query.bindValue(":time", time);
    query.bindValue(":contact", contact);

    // Execute query
    if (!query.exec()) {
        qDebug() << "Insert failed:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error",
                              "Failed to save event: " + query.lastError().text());
    } else {
        QMessageBox::information(this, "Success", "Event scheduled successfully!");

        // Clear form fields
        ui->lineEdit_Name->clear();
        ui->lineEdit_venue->clear();
        ui->lineEdit_date->clear();
        ui->lineEdit_time->clear();
        ui->lineEdit_time_2->clear();
    }
}
