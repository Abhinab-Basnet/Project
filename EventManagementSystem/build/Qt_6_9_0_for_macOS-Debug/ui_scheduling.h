/********************************************************************************
** Form generated from reading UI file 'scheduling.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULING_H
#define UI_SCHEDULING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scheduling
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_venue;
    QLineEdit *lineEdit_date;
    QLineEdit *lineEdit_time;
    QLineEdit *lineEdit_time_2;
    QPushButton *pushButton_save;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *scheduling)
    {
        if (scheduling->objectName().isEmpty())
            scheduling->setObjectName("scheduling");
        scheduling->resize(800, 500);
        scheduling->setMinimumSize(QSize(800, 500));
        scheduling->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(scheduling);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 801, 481));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/login.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 371, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sylfaen")});
        font.setPointSize(15);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_Name = new QLineEdit(centralwidget);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(50, 110, 341, 41));
        lineEdit_venue = new QLineEdit(centralwidget);
        lineEdit_venue->setObjectName("lineEdit_venue");
        lineEdit_venue->setGeometry(QRect(50, 160, 341, 41));
        lineEdit_date = new QLineEdit(centralwidget);
        lineEdit_date->setObjectName("lineEdit_date");
        lineEdit_date->setGeometry(QRect(50, 210, 341, 41));
        lineEdit_time = new QLineEdit(centralwidget);
        lineEdit_time->setObjectName("lineEdit_time");
        lineEdit_time->setGeometry(QRect(50, 260, 341, 41));
        lineEdit_time_2 = new QLineEdit(centralwidget);
        lineEdit_time_2->setObjectName("lineEdit_time_2");
        lineEdit_time_2->setGeometry(QRect(50, 310, 341, 41));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(250, 380, 141, 41));
        QFont font1;
        font1.setPointSize(15);
        pushButton_save->setFont(font1);
        pushButton_save->setStyleSheet(QString::fromUtf8("QPushButton{ background-color:black;\n"
"color:white;\n"
"}"));
        scheduling->setCentralWidget(centralwidget);
        menubar = new QMenuBar(scheduling);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
        scheduling->setMenuBar(menubar);
        statusbar = new QStatusBar(scheduling);
        statusbar->setObjectName("statusbar");
        scheduling->setStatusBar(statusbar);

        retranslateUi(scheduling);

        QMetaObject::connectSlotsByName(scheduling);
    } // setupUi

    void retranslateUi(QMainWindow *scheduling)
    {
        scheduling->setWindowTitle(QCoreApplication::translate("scheduling", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("scheduling", "Fill Detail of your event to be scheduled", nullptr));
        lineEdit_Name->setPlaceholderText(QCoreApplication::translate("scheduling", "Name Your Event", nullptr));
        lineEdit_venue->setText(QString());
        lineEdit_venue->setPlaceholderText(QCoreApplication::translate("scheduling", "Venue", nullptr));
        lineEdit_date->setText(QString());
        lineEdit_date->setPlaceholderText(QCoreApplication::translate("scheduling", "Date of Event      YYYY/MM/DD ", nullptr));
        lineEdit_time->setText(QString());
        lineEdit_time->setPlaceholderText(QCoreApplication::translate("scheduling", "Time of event", nullptr));
        lineEdit_time_2->setText(QString());
        lineEdit_time_2->setPlaceholderText(QCoreApplication::translate("scheduling", "Contact number of event organizer", nullptr));
        pushButton_save->setText(QCoreApplication::translate("scheduling", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scheduling: public Ui_scheduling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULING_H
