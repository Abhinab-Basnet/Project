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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnstart;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 471));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Welcome !!.jpg")));
        label->setScaledContents(true);
        btnstart = new QPushButton(centralwidget);
        btnstart->setObjectName("btnstart");
        btnstart->setGeometry(QRect(530, 400, 201, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        btnstart->setFont(font);
        btnstart->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(253,139,81);\n"
"\n"
"border-radius:20px;\n"
"color:white;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color:rgb(37,113,128);\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekForward));
        btnstart->setIcon(icon);
        btnstart->setIconSize(QSize(20, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Welcome!!", nullptr));
        label->setText(QString());
        btnstart->setText(QCoreApplication::translate("MainWindow", "Let's Get Started", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
