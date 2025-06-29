/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *onewelcome;
    QLabel *label;
    QPushButton *Gotologin;
    QWidget *twologin;
    QLabel *Password;
    QLabel *label_3;
    QLineEdit *Email;
    QLineEdit *Password_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *Gotosignup;
    QPushButton *Login;
    QWidget *signuppage;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *Fullname;
    QLineEdit *Emailid;
    QLineEdit *Contact;
    QLineEdit *Password_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *Gotologin1;
    QWidget *page;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 500));
        stackedWidget->setMinimumSize(QSize(800, 500));
        stackedWidget->setMaximumSize(QSize(800, 500));
        onewelcome = new QWidget();
        onewelcome->setObjectName("onewelcome");
        onewelcome->setMinimumSize(QSize(800, 500));
        onewelcome->setMaximumSize(QSize(800, 500));
        label = new QLabel(onewelcome);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 471));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/Untitled design.jpg")));
        label->setScaledContents(true);
        Gotologin = new QPushButton(onewelcome);
        Gotologin->setObjectName("Gotologin");
        Gotologin->setGeometry(QRect(605, 390, 141, 51));
        Gotologin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"\n"
"}"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-next")));
        Gotologin->setIcon(icon);
        Gotologin->setIconSize(QSize(20, 20));
        stackedWidget->addWidget(onewelcome);
        twologin = new QWidget();
        twologin->setObjectName("twologin");
        twologin->setMinimumSize(QSize(800, 500));
        twologin->setMaximumSize(QSize(800, 500));
        Password = new QLabel(twologin);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(0, 0, 791, 461));
        Password->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (2).jpg")));
        Password->setScaledContents(true);
        label_3 = new QLabel(twologin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 130, 261, 81));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(10, 0, 87);\n"
"\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Email = new QLineEdit(twologin);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(260, 210, 301, 41));
        QFont font1;
        font1.setPointSize(12);
        Email->setFont(font1);
        Email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"background:transparent;\n"
"padding:30px;\n"
"}"));
        Password_2 = new QLineEdit(twologin);
        Password_2->setObjectName("Password_2");
        Password_2->setGeometry(QRect(260, 280, 301, 41));
        Password_2->setFont(font1);
        Password_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"background:transparent;\n"
"padding:30px;\n"
"}"));
        label_2 = new QLabel(twologin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 220, 21, 21));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/envelope-solid.svg")));
        label_2->setScaledContents(true);
        label_4 = new QLabel(twologin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 290, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/lock-solid.svg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(twologin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 330, 241, 21));
        QFont font2;
        font2.setPointSize(11);
        label_5->setFont(font2);
        Gotosignup = new QPushButton(twologin);
        Gotosignup->setObjectName("Gotosignup");
        Gotosignup->setGeometry(QRect(440, 330, 61, 21));
        Gotosignup->setFont(font2);
        Gotosignup->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"background:transparent;\n"
"color:blue;\n"
"\n"
"}"));
        Login = new QPushButton(twologin);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(310, 370, 191, 41));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        Login->setFont(font3);
        Login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(0, 0, 68);\n"
"color:white;\n"
"border:none;\n"
"\n"
"\n"
"}"));
        stackedWidget->addWidget(twologin);
        signuppage = new QWidget();
        signuppage->setObjectName("signuppage");
        signuppage->setMinimumSize(QSize(800, 500));
        signuppage->setMaximumSize(QSize(800, 500));
        label_6 = new QLabel(signuppage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 791, 461));
        label_6->setFont(font2);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (3).jpg")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(signuppage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 110, 261, 41));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(true);
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(0, 5, 70);\n"
"\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Fullname = new QLineEdit(signuppage);
        Fullname->setObjectName("Fullname");
        Fullname->setGeometry(QRect(260, 170, 291, 31));
        Fullname->setFont(font2);
        Fullname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border: none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding:30px;\n"
"}"));
        Emailid = new QLineEdit(signuppage);
        Emailid->setObjectName("Emailid");
        Emailid->setGeometry(QRect(260, 220, 291, 31));
        Emailid->setFont(font2);
        Emailid->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border: none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding:30px;\n"
"\n"
"}"));
        Contact = new QLineEdit(signuppage);
        Contact->setObjectName("Contact");
        Contact->setGeometry(QRect(260, 270, 291, 31));
        Contact->setFont(font2);
        Contact->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border: none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding:30px;\n"
"}"));
        Password_3 = new QLineEdit(signuppage);
        Password_3->setObjectName("Password_3");
        Password_3->setGeometry(QRect(260, 320, 291, 31));
        Password_3->setFont(font2);
        Password_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border: none;\n"
"border-bottom:1px solid rgb(10,0,87);\n"
"padding:30px;\n"
"}"));
        label_8 = new QLabel(signuppage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(260, 220, 21, 21));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/envelope-solid.svg")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(signuppage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 320, 21, 21));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/resources/lock-solid.svg")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(signuppage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(260, 270, 21, 21));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/phone-solid.svg")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(signuppage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(260, 170, 21, 21));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/resources/file-signature-solid.svg")));
        label_11->setScaledContents(true);
        Gotologin1 = new QPushButton(signuppage);
        Gotologin1->setObjectName("Gotologin1");
        Gotologin1->setGeometry(QRect(320, 370, 181, 41));
        QFont font5;
        font5.setPointSize(19);
        Gotologin1->setFont(font5);
        Gotologin1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 0, 65);\n"
"color:white;\n"
"border:none;\n"
"}"));
        stackedWidget->addWidget(signuppage);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        Gotologin->setText(QString());
        Password->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "USER LOGIN", nullptr));
        Email->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email-ID", nullptr));
        Password_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Haven't signed up yet? ", nullptr));
        Gotosignup->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Create Your Account", nullptr));
        Fullname->setPlaceholderText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        Emailid->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email-ID", nullptr));
        Contact->setPlaceholderText(QCoreApplication::translate("MainWindow", "Contact Number", nullptr));
        Password_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        Gotologin1->setText(QCoreApplication::translate("MainWindow", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
