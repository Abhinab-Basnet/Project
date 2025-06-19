/********************************************************************************
** Form generated from reading UI file 'event.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT_H
#define UI_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Event
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_volunteers;
    QPushButton *pushButton_Place;
    QPushButton *pushButton_Schedule;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Event)
    {
        if (Event->objectName().isEmpty())
            Event->setObjectName("Event");
        Event->resize(800, 500);
        Event->setMinimumSize(QSize(800, 500));
        Event->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(Event);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 571));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/SIGN IN/1.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 200, 431, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(29);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_volunteers = new QPushButton(centralwidget);
        pushButton_volunteers->setObjectName("pushButton_volunteers");
        pushButton_volunteers->setGeometry(QRect(70, 350, 271, 71));
        QFont font1;
        font1.setPointSize(20);
        pushButton_volunteers->setFont(font1);
        pushButton_volunteers->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background-color:rgb(63, 37, 116);\n"
"border-radius:30px;\n"
"}"));
        pushButton_Place = new QPushButton(centralwidget);
        pushButton_Place->setObjectName("pushButton_Place");
        pushButton_Place->setGeometry(QRect(70, 230, 271, 71));
        pushButton_Place->setFont(font1);
        pushButton_Place->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background-color:rgb(63, 37, 116);\n"
"border-radius:30px;\n"
"}"));
        pushButton_Schedule = new QPushButton(centralwidget);
        pushButton_Schedule->setObjectName("pushButton_Schedule");
        pushButton_Schedule->setGeometry(QRect(70, 120, 271, 71));
        pushButton_Schedule->setFont(font1);
        pushButton_Schedule->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"background-color:rgb(63, 37, 116);\n"
"border-radius:30px;\n"
"}"));
        Event->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Event);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Event->setMenuBar(menubar);
        statusbar = new QStatusBar(Event);
        statusbar->setObjectName("statusbar");
        Event->setStatusBar(statusbar);

        retranslateUi(Event);

        QMetaObject::connectSlotsByName(Event);
    } // setupUi

    void retranslateUi(QMainWindow *Event)
    {
        Event->setWindowTitle(QCoreApplication::translate("Event", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Event", "Manage your Event", nullptr));
        pushButton_volunteers->setText(QCoreApplication::translate("Event", "Manage Volunteers", nullptr));
        pushButton_Place->setText(QCoreApplication::translate("Event", "Manage Place", nullptr));
        pushButton_Schedule->setText(QCoreApplication::translate("Event", "Schedule Events", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Event: public Ui_Event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_H
