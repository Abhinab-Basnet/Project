/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Dashboardmain;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Profile;
    QPushButton *Booking;
    QPushButton *Managing;
    QPushButton *Helpcenter;
    QPushButton *Settings;
    QPushButton *Logout;
    QWidget *schedulingevent;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *Eventname;
    QLineEdit *Location;
    QLineEdit *Time;
    QLineEdit *Date;
    QLineEdit *Contact;
    QPushButton *Save;
    QWidget *Place;
    QWidget *dashboard;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1200, 700);
        Dashboard->setMinimumSize(QSize(1200, 700));
        Dashboard->setMaximumSize(QSize(1200, 700));
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1191, 671));
        Dashboardmain = new QWidget();
        Dashboardmain->setObjectName("Dashboardmain");
        label_2 = new QLabel(Dashboardmain);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1191, 661));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (5).jpg")));
        label_2->setScaledContents(true);
        label_5 = new QLabel(Dashboardmain);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 20, 271, 91));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(Dashboardmain);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 20, 271, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Profile = new QPushButton(Dashboardmain);
        Profile->setObjectName("Profile");
        Profile->setGeometry(QRect(70, 170, 201, 41));
        QFont font2;
        font2.setPointSize(18);
        Profile->setFont(font2);
        Profile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background:transparent;\n"
"border:none;\n"
"\n"
"}"));
        Booking = new QPushButton(Dashboardmain);
        Booking->setObjectName("Booking");
        Booking->setGeometry(QRect(80, 220, 201, 41));
        Booking->setFont(font2);
        Booking->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background:transparent;\n"
"border: none;\n"
"\n"
"}"));
        Managing = new QPushButton(Dashboardmain);
        Managing->setObjectName("Managing");
        Managing->setGeometry(QRect(90, 270, 201, 41));
        Managing->setFont(font2);
        Managing->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background:transparent;\n"
"border: none;\n"
"\n"
"}"));
        Helpcenter = new QPushButton(Dashboardmain);
        Helpcenter->setObjectName("Helpcenter");
        Helpcenter->setGeometry(QRect(100, 320, 201, 41));
        Helpcenter->setFont(font2);
        Helpcenter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background:transparent;\n"
"border: none;\n"
"\n"
"}"));
        Settings = new QPushButton(Dashboardmain);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(90, 370, 201, 41));
        Settings->setFont(font2);
        Settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background:transparent;\n"
"border: none;\n"
"\n"
"}"));
        Logout = new QPushButton(Dashboardmain);
        Logout->setObjectName("Logout");
        Logout->setGeometry(QRect(70, 470, 191, 61));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        Logout->setFont(font3);
        Logout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(21, 0, 143);\n"
"color:white;\n"
"border-radius:20px;\n"
"\n"
"}"));
        stackedWidget->addWidget(Dashboardmain);
        schedulingevent = new QWidget();
        schedulingevent->setObjectName("schedulingevent");
        schedulingevent->setMinimumSize(QSize(1200, 700));
        schedulingevent->setMaximumSize(QSize(1200, 700));
        label_7 = new QLabel(schedulingevent);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 1191, 661));
        label_7->setAutoFillBackground(false);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (5).jpg")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(schedulingevent);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 30, 231, 81));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(schedulingevent);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 30, 231, 81));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"\n"
"}"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Eventname = new QLineEdit(schedulingevent);
        Eventname->setObjectName("Eventname");
        Eventname->setGeometry(QRect(540, 170, 441, 51));
        QFont font4;
        font4.setPointSize(11);
        Eventname->setFont(font4);
        Eventname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid blue;\n"
"padding-left:30px;\n"
"\n"
"}"));
        Location = new QLineEdit(schedulingevent);
        Location->setObjectName("Location");
        Location->setGeometry(QRect(540, 230, 441, 51));
        Location->setFont(font4);
        Location->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid blue;\n"
"padding-left:30px;\n"
"\n"
"}"));
        Time = new QLineEdit(schedulingevent);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(540, 290, 441, 51));
        Time->setFont(font4);
        Time->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid blue;\n"
"padding-left:30px;\n"
"\n"
"}"));
        Date = new QLineEdit(schedulingevent);
        Date->setObjectName("Date");
        Date->setGeometry(QRect(540, 350, 441, 51));
        Date->setFont(font4);
        Date->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid blue;\n"
"padding-left:30px;\n"
"\n"
"}"));
        Contact = new QLineEdit(schedulingevent);
        Contact->setObjectName("Contact");
        Contact->setGeometry(QRect(540, 410, 441, 51));
        Contact->setFont(font4);
        Contact->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid blue;\n"
"padding-left:30px;\n"
"\n"
"}"));
        Save = new QPushButton(schedulingevent);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(800, 490, 181, 41));
        Save->setFont(font2);
        stackedWidget->addWidget(schedulingevent);
        Place = new QWidget();
        Place->setObjectName("Place");
        stackedWidget->addWidget(Place);
        dashboard = new QWidget();
        dashboard->setObjectName("dashboard");
        label = new QLabel(dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1191, 671));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (5).jpg")));
        label->setScaledContents(true);
        label_3 = new QLabel(dashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 311, 91));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setUnderline(false);
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(dashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 20, 311, 91));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(false);
        label_4->setFont(font6);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(dashboard);
        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 18));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName("statusbar");
        Dashboard->setStatusBar(statusbar);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "MainWindow", nullptr));
        label_2->setText(QString());
        label_5->setText(QCoreApplication::translate("Dashboard", "Manage Your Events", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "DASHBOARD", nullptr));
        Profile->setText(QCoreApplication::translate("Dashboard", "Profile", nullptr));
        Booking->setText(QCoreApplication::translate("Dashboard", "Booking", nullptr));
        Managing->setText(QCoreApplication::translate("Dashboard", "Managing", nullptr));
        Helpcenter->setText(QCoreApplication::translate("Dashboard", "Help Center", nullptr));
        Settings->setText(QCoreApplication::translate("Dashboard", "Settings", nullptr));
        Logout->setText(QCoreApplication::translate("Dashboard", "LOG OUT", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Dashboard", "Manage Your Events", nullptr));
        label_9->setText(QCoreApplication::translate("Dashboard", "SCHEDULING", nullptr));
        Eventname->setPlaceholderText(QCoreApplication::translate("Dashboard", "Name of your Event", nullptr));
        Location->setPlaceholderText(QCoreApplication::translate("Dashboard", "Location of Your Event", nullptr));
        Time->setPlaceholderText(QCoreApplication::translate("Dashboard", "Time", nullptr));
        Date->setPlaceholderText(QCoreApplication::translate("Dashboard", "Date YYYY/MM/DD", nullptr));
        Contact->setPlaceholderText(QCoreApplication::translate("Dashboard", "Contact", nullptr));
        Save->setText(QCoreApplication::translate("Dashboard", "Save", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("Dashboard", "Manage Your Events", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
