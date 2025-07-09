#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>
#include <QMessageBox>
#include <QApplication>
bool connectDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QCoreApplication::applicationDirPath() + "/event_management.db";

    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to connect to database: " + db.lastError().text());
        return false;
    }

    qDebug() << "Database connected at:" << dbPath;

    QSqlQuery query;

    // Create users table
    QString createUsersTable = "CREATE TABLE IF NOT EXISTS users ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                               "name TEXT NOT NULL, "
                               "email TEXT NOT NULL, "
                               "username TEXT UNIQUE NOT NULL, "
                               "password TEXT NOT NULL, "
                               "phone TEXT, "
                               "created_at DATETIME DEFAULT CURRENT_TIMESTAMP)";
    if (!query.exec(createUsersTable)) {
        qDebug() << "Failed to create users table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create users table: " + query.lastError().text());
        return false;
    }

    qDebug() << "Users table ready.";

    // Create events table (with user_id foreign key)
    QString createEventsTable = "CREATE TABLE IF NOT EXISTS events ("
                                "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                "user_id INTEGER NOT NULL, "  //  Added user_id
                                "name TEXT NOT NULL, "
                                "venue TEXT NOT NULL, "
                                "date TEXT NOT NULL, "
                                "time TEXT NOT NULL, "
                                "organizer_contact TEXT NOT NULL, "
                                "created_at DATETIME DEFAULT CURRENT_TIMESTAMP, "
                                "FOREIGN KEY(user_id) REFERENCES users(id))";
    if (!query.exec(createEventsTable)) {
        qDebug() << "Failed to create events table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create events table: " + query.lastError().text());
        return false;
    }

    qDebug() << "Events table ready.";

    return true;
}
