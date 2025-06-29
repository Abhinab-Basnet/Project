/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_Signup
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Fullname;
    QLineEdit *Emailid;
    QLineEdit *Contact;
    QLineEdit *Password;
    QPushButton *Gotologin1;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(800, 500);
        Signup->setMinimumSize(QSize(800, 500));
        Signup->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(Signup);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -10, 791, 461));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (3).jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 100, 291, 51));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Fullname = new QLineEdit(centralwidget);
        Fullname->setObjectName("Fullname");
        Fullname->setGeometry(QRect(260, 150, 311, 41));
        QFont font1;
        font1.setPointSize(11);
        Fullname->setFont(font1);
        Fullname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:black;\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding-left:30px\n"
"}"));
        Emailid = new QLineEdit(centralwidget);
        Emailid->setObjectName("Emailid");
        Emailid->setGeometry(QRect(260, 200, 311, 41));
        Emailid->setFont(font1);
        Emailid->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:black;\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding-left:30px\n"
"}"));
        Contact = new QLineEdit(centralwidget);
        Contact->setObjectName("Contact");
        Contact->setGeometry(QRect(260, 250, 311, 41));
        Contact->setFont(font1);
        Contact->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:black;\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding-left:30px\n"
"}"));
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(260, 300, 311, 41));
        Password->setFont(font1);
        Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:black;\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding-left:30px\n"
"}"));
        Password->setEchoMode(QLineEdit::EchoMode::Password);
        Gotologin1 = new QPushButton(centralwidget);
        Gotologin1->setObjectName("Gotologin1");
        Gotologin1->setGeometry(QRect(310, 360, 191, 51));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        Gotologin1->setFont(font2);
        Gotologin1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"border:none;\n"
"background-color:rgb(10,0,87);\n"
"\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 160, 21, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/file-signature-solid.svg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 210, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/envelope-solid.svg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 260, 21, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/phone-solid.svg")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 310, 21, 21));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/lock-solid.svg")));
        label_6->setScaledContents(true);
        Signup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Signup);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Signup->setMenuBar(menubar);
        statusbar = new QStatusBar(Signup);
        statusbar->setObjectName("statusbar");
        Signup->setStatusBar(statusbar);

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QMainWindow *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Signup", "Create Your Account", nullptr));
        Fullname->setPlaceholderText(QCoreApplication::translate("Signup", "Full Name", nullptr));
        Emailid->setPlaceholderText(QCoreApplication::translate("Signup", "Email- ID", nullptr));
        Contact->setPlaceholderText(QCoreApplication::translate("Signup", "Contact Number", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("Signup", "Password", nullptr));
        Gotologin1->setText(QCoreApplication::translate("Signup", "SIGN UP", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
