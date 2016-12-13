#-------------------------------------------------
#
# Project created by QtCreator 2016-12-13T13:57:11
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zzVerkefni_3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    computers.cpp \
    dataaccess.cpp \
    performer.cpp \
    performerservice.cpp \
    relations.cpp \
    relationsid.cpp \
    relationstable.cpp

HEADERS  += mainwindow.h \
    computers.h \
    dataaccess.h \
    performer.h \
    performerservice.h \
    relations.h \
    relationsid.h \
    relationstable.h

FORMS    += mainwindow.ui
