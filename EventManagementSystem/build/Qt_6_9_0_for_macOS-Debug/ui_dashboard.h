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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_Event;
    QPushButton *pushButton_Volunteers;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(800, 500);
        Dashboard->setMinimumSize(QSize(800, 500));
        Dashboard->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 800, 500));
        label->setMinimumSize(QSize(800, 500));
        label->setMaximumSize(QSize(800, 500));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/SIGN IN/3.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-80, -10, 401, 121));
        QFont font;
        font.setPointSize(34);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, -10, 401, 121));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:black;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-50, 70, 291, 81));
        QFont font1;
        font1.setPointSize(20);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-50, 100, 291, 81));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_Event = new QPushButton(centralwidget);
        pushButton_Event->setObjectName("pushButton_Event");
        pushButton_Event->setGeometry(QRect(480, 170, 281, 81));
        QFont font2;
        font2.setPointSize(15);
        pushButton_Event->setFont(font2);
        pushButton_Event->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(63, 37, 116);\n"
"color:white;\n"
"border-radius:10px;\n"
"}"));
        pushButton_Volunteers = new QPushButton(centralwidget);
        pushButton_Volunteers->setObjectName("pushButton_Volunteers");
        pushButton_Volunteers->setGeometry(QRect(480, 320, 281, 81));
        pushButton_Volunteers->setFont(font2);
        pushButton_Volunteers->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(63, 37, 116);\n"
"color:white;\n"
"border-radius:10px;\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-50, 130, 291, 81));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-50, 160, 291, 81));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-50, 190, 291, 81));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(-50, 220, 291, 81));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(-50, 300, 291, 81));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(-50, 330, 291, 81));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(-50, 360, 291, 81));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(-50, 390, 291, 81));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(-50, 420, 291, 81));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(-50, 450, 291, 81));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
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
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Dashboard", "DASH", nullptr));
        label_3->setText(QCoreApplication::translate("Dashboard", "BOARD", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "D", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "E", nullptr));
        pushButton_Event->setText(QCoreApplication::translate("Dashboard", "Manage your Event", nullptr));
        pushButton_Volunteers->setText(QCoreApplication::translate("Dashboard", "Booking Event", nullptr));
        label_7->setText(QCoreApplication::translate("Dashboard", "S", nullptr));
        label_5->setText(QCoreApplication::translate("Dashboard", "I", nullptr));
        label_8->setText(QCoreApplication::translate("Dashboard", "G", nullptr));
        label_9->setText(QCoreApplication::translate("Dashboard", "N", nullptr));
        label_10->setText(QCoreApplication::translate("Dashboard", "E", nullptr));
        label_11->setText(QCoreApplication::translate("Dashboard", "V", nullptr));
        label_12->setText(QCoreApplication::translate("Dashboard", "E", nullptr));
        label_13->setText(QCoreApplication::translate("Dashboard", "N", nullptr));
        label_14->setText(QCoreApplication::translate("Dashboard", "T", nullptr));
        label_15->setText(QCoreApplication::translate("Dashboard", "S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
