/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Emailid;
    QLineEdit *Password;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *Gotosignup;
    QPushButton *Gotodash;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 500);
        login->setMinimumSize(QSize(800, 500));
        login->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 781, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (2).jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 150, 201, 61));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(0, 1, 77);\n"
"\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Emailid = new QLineEdit(centralwidget);
        Emailid->setObjectName("Emailid");
        Emailid->setGeometry(QRect(270, 210, 291, 41));
        QFont font1;
        font1.setPointSize(11);
        Emailid->setFont(font1);
        Emailid->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:black;\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding-left:30px;\n"
"}"));
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(270, 270, 291, 41));
        Password->setFont(font1);
        Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:black;\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding-left:30px;\n"
"}"));
        Password->setEchoMode(QLineEdit::EchoMode::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 220, 21, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/envelope-solid.svg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 280, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/lock-solid.svg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 320, 211, 31));
        label_5->setFont(font1);
        Gotosignup = new QPushButton(centralwidget);
        Gotosignup->setObjectName("Gotosignup");
        Gotosignup->setGeometry(QRect(460, 320, 101, 31));
        Gotosignup->setFont(font1);
        Gotosignup->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:blue;\n"
"border:none;\n"
"background:transparent;\n"
"}"));
        Gotodash = new QPushButton(centralwidget);
        Gotodash->setObjectName("Gotodash");
        Gotodash->setGeometry(QRect(340, 370, 151, 41));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        Gotodash->setFont(font2);
        Gotodash->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(10,0,87);\n"
"color:white;\n"
"border:none;\n"
"}\n"
""));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "USER LOGIN", nullptr));
        Emailid->setPlaceholderText(QCoreApplication::translate("login", "Email ID", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("login", "Haven't you signed up yet? ", nullptr));
        Gotosignup->setText(QCoreApplication::translate("login", "Sign up", nullptr));
        Gotodash->setText(QCoreApplication::translate("login", "LOG IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
