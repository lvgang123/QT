#-------------------------------------------------
#
# Project created by QtCreator 2019-03-05T10:03:21
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainWindow
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    mythread.cpp \
    curvechart.cpp

HEADERS += \
        mainwindow.h \
    mythread.h \
    curvechart.h

FORMS += \
        mainwindow.ui

RC_ICONS = test3.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Create_sql/release/ -lCreate_sql
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Create_sql/debug/ -lCreate_sql

INCLUDEPATH += $$PWD/../Create_sql
DEPENDPATH += $$PWD/../Create_sql

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../client_tcp/release/ -lclient_tcp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../client_tcp/debug/ -lclient_tcp

INCLUDEPATH += $$PWD/../client_tcp
DEPENDPATH += $$PWD/../client_tcp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../tcp_thread/release/ -ltcp_thread
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../tcp_thread/debug/ -ltcp_thread

INCLUDEPATH += $$PWD/../tcp_thread
DEPENDPATH += $$PWD/../tcp_thread
