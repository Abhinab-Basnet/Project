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
#include <QtWidgets/QPushButton>
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
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
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
        formLayoutWidget->setGeometry(QRect(220, 120, 341, 211));
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

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_2);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_3);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_6);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEdit_4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 370, 93, 35));
        QFont font2;
        font2.setPointSize(16);
        pushButton->setFont(font2);
        Signuppage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Signuppage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
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
        label_3->setText(QCoreApplication::translate("Signuppage", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("Signuppage", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("Signuppage", "Number:", nullptr));
        label_6->setText(QCoreApplication::translate("Signuppage", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("Signuppage", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signuppage: public Ui_Signuppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
