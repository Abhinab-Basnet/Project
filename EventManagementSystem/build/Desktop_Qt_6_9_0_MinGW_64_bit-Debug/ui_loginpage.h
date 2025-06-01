/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

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

class Ui_Loginpage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtemail;
    QLineEdit *txtpassword;
    QPushButton *btnlogin;
    QLabel *txtforgotpass;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Loginpage)
    {
        if (Loginpage->objectName().isEmpty())
            Loginpage->setObjectName("Loginpage");
        Loginpage->resize(800, 500);
        Loginpage->setMinimumSize(QSize(800, 500));
        Loginpage->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(Loginpage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 471));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/login.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 411, 51));
        QFont font;
        font.setPointSize(21);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txtemail = new QLineEdit(centralwidget);
        txtemail->setObjectName("txtemail");
        txtemail->setGeometry(QRect(100, 200, 311, 31));
        txtemail->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(10);
        txtemail->setFont(font1);
        txtemail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:rgb(141,216,255);\n"
"\n"
"border-radius:15px;\n"
"height:30px;\n"
"padding:10px 10px;\n"
"\n"
"\n"
"}"));
        txtpassword = new QLineEdit(centralwidget);
        txtpassword->setObjectName("txtpassword");
        txtpassword->setGeometry(QRect(100, 260, 311, 31));
        txtpassword->setMinimumSize(QSize(0, 0));
        txtpassword->setFont(font1);
        txtpassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:rgb(141,216,255);\n"
"\n"
"border-radius:15px;\n"
"height:30px;\n"
"padding:10px 10px;\n"
"\n"
"\n"
"}"));
        txtpassword->setEchoMode(QLineEdit::EchoMode::Password);
        btnlogin = new QPushButton(centralwidget);
        btnlogin->setObjectName("btnlogin");
        btnlogin->setGeometry(QRect(210, 360, 91, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sylfaen")});
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        btnlogin->setFont(font2);
        btnlogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(3, 0, 92);\n"
"color:white;\n"
"\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:Hover{\n"
"\n"
"	background-color: rgb(255, 114, 79);\n"
"}\n"
""));
        txtforgotpass = new QLabel(centralwidget);
        txtforgotpass->setObjectName("txtforgotpass");
        txtforgotpass->setGeometry(QRect(110, 300, 121, 16));
        QFont font3;
        font3.setPointSize(9);
        txtforgotpass->setFont(font3);
        txtforgotpass->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:blue;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 140, 261, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Titillium Web")});
        font4.setPointSize(15);
        font4.setBold(true);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(0, 0, 81);\n"
"\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(570, 180, 171, 16));
        QFont font5;
        font5.setPointSize(14);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"rgb(0, 0, 94)\n"
"\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(600, 250, 111, 31));
        QFont font6;
        font6.setPointSize(17);
        font6.setBold(true);
        pushButton->setFont(font6);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 85, 0);\n"
"color:white;\n"
"\n"
"border-radius:15px;\n"
"}"));
        Loginpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Loginpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Loginpage->setMenuBar(menubar);
        statusbar = new QStatusBar(Loginpage);
        statusbar->setObjectName("statusbar");
        Loginpage->setStatusBar(statusbar);

        retranslateUi(Loginpage);

        QMetaObject::connectSlotsByName(Loginpage);
    } // setupUi

    void retranslateUi(QMainWindow *Loginpage)
    {
        Loginpage->setWindowTitle(QCoreApplication::translate("Loginpage", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Loginpage", "LOGIN TO YOUR ACCOUNT", nullptr));
        txtemail->setPlaceholderText(QCoreApplication::translate("Loginpage", "Enter e-mail", nullptr));
        txtpassword->setPlaceholderText(QCoreApplication::translate("Loginpage", "Enter Password", nullptr));
        btnlogin->setText(QCoreApplication::translate("Loginpage", "Login", nullptr));
        txtforgotpass->setText(QCoreApplication::translate("Loginpage", "Forgot your Password?", nullptr));
        label_3->setText(QCoreApplication::translate("Loginpage", "Haven't Logged in yet?", nullptr));
        label_4->setText(QCoreApplication::translate("Loginpage", "Click to be our part", nullptr));
        pushButton->setText(QCoreApplication::translate("Loginpage", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginpage: public Ui_Loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
