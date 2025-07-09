QT       += core gui
QT += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    event.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    scheduling.cpp \
    signuppage.cpp

HEADERS += \
    dashboard.h \
    event.h \
    loginpage.h \
    mainwindow.h \
    scheduling.h \
    sessionmanager.h \
    signuppage.h

FORMS += \
    dashboard.ui \
    event.ui \
    loginpage.ui \
    mainwindow.ui \
    scheduling.ui \
    signuppage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    images/Welcome !!.jpg \
    images/Welcome !!.jpg \
    images/Welcome !!.jpg \
    images/login.jpg \
    images/signup.jpg
