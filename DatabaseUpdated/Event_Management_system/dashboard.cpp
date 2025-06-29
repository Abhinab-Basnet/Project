#include "dashboard.h"
#include "ui_dashboard.h"
#include<QMessageBox>
#include "database.h"
#include "sessionmanager.h"
#include <QRegularExpression>
#include<QString>
#include <QDate>
#include <QTime>
Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);


}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_Managing_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Dashboard::on_Save_clicked()
{
    QString name = ui->Eventname->text().trimmed();
    QString venue = ui->Location->text().trimmed();
    QString date = ui->Date->text().trimmed();
    QString time = ui->Time->text().trimmed();
    QString contact = ui->Contact->text().trimmed();


    // Validate inputs
    if (name.isEmpty() || venue.isEmpty() || date.isEmpty() || time.isEmpty() || contact.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QRegularExpression  nameRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!nameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Invalid Name", "Please enter a valid Event name.");
    }

    QRegularExpression  venueRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!venueRegex.match(venue).hasMatch()) {
        QMessageBox::warning(this, "Invalid Name", "Please enter a venue name.");
    }

    QString timeStr = ui->Time->text().trimmed();
    QTime ptime = QTime::fromString(timeStr, "HH:mm");
    if (!ptime.isValid()) {
        QMessageBox::warning(this, "Input Error", "Invalid time format. Use HH:mm (e.g., 10:00).");
        return;
    }

    QRegularExpression contactRegex("^(98|97)\\d{8}$");
    if (!contactRegex.match(contact).hasMatch()) {
        QMessageBox::warning(this, "Input Error", "Contact number must start with 98 or 97 and contain exactly 10 digits.");
        return;
    }

    QDate datestr = QDate::fromString(date, "yyyy/MM/dd");
    if (!datestr.isValid()) {
        QMessageBox::warning(this, "Input Error", "Invalid date entered.");
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
        ui->Eventname->clear();
        ui->Location->clear();
        ui->Date->clear();
        ui->Time->clear();
        ui->Contact->clear();
    }

    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Manage Place","Do you want to manage place in your event?",QMessageBox::Yes |QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else{
        ui->stackedWidget->setCurrentIndex(0);

    }

}

