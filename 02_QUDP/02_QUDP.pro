#-------------------------------------------------
#
# Project created by QtCreator 2019-02-24T12:02:15
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 02_QUDP
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    udpserver.cpp

HEADERS  += widget.h \
    udpserver.h

FORMS    += widget.ui \
    udpserver.ui
