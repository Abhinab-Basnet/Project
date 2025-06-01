/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signuppage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Signuppage)
    {
        if (Signuppage->objectName().isEmpty())
            Signuppage->setObjectName("Signuppage");
        Signuppage->resize(800, 500);
        Signuppage->setMinimumSize(QSize(800, 500));
        Signuppage->setMaximumSize(QSize(800, 500));
        Signuppage->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Signuppage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 471));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/signup.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 30, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Gothic")});
        font.setPointSize(34);
        font.setBold(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"	background-color: rgb(255, 85, 0);\n"
"\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(230, 120, 341, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_9);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, lineEdit_6);

        lineEdit_7 = new QLineEdit(formLayoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, lineEdit_7);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(330, 370, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Gothic")});
        font2.setPointSize(24);
        font2.setBold(false);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"	\n"
"	background-color: rgb(255, 0, 0);\n"
"border-radius:15px;\n"
"\n"
"}"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Signuppage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Signuppage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Signuppage->setMenuBar(menubar);
        statusbar = new QStatusBar(Signuppage);
        statusbar->setObjectName("statusbar");
        Signuppage->setStatusBar(statusbar);

        retranslateUi(Signuppage);

        QMetaObject::connectSlotsByName(Signuppage);
    } // setupUi

    void retranslateUi(QMainWindow *Signuppage)
    {
        Signuppage->setWindowTitle(QCoreApplication::translate("Signuppage", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Signuppage", "SIGN UP", nullptr));
        label_3->setText(QCoreApplication::translate("Signuppage", "First Name:", nullptr));
        label_4->setText(QCoreApplication::translate("Signuppage", "Middle Name:", nullptr));
        label_5->setText(QCoreApplication::translate("Signuppage", "Last Name:", nullptr));
        label_6->setText(QCoreApplication::translate("Signuppage", "E-Mail:", nullptr));
        label_7->setText(QCoreApplication::translate("Signuppage", "Contact Number:", nullptr));
        label_8->setText(QCoreApplication::translate("Signuppage", "Password:", nullptr));
        label_9->setText(QCoreApplication::translate("Signuppage", "Confirm Password:", nullptr));
        label_10->setText(QCoreApplication::translate("Signuppage", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signuppage: public Ui_Signuppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
