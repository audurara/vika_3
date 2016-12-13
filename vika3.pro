#-------------------------------------------------
#
# Project created by QtCreator 2016-12-13T12:39:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = vika3
TEMPLATE = app
QT += sql


SOURCES += main.cpp\
    dataaccess.cpp \
    consoleui.cpp \
    performer.cpp \
    performerservice.cpp \
    relationstable.cpp \
    computers.cpp \
    relations.cpp \
    relationsid.cpp

HEADERS  += \
    dataaccess.h \
    consoleui.h \
    performer.h \
    performerservice.h \
    relationstable.h \
    computers.h \
    relations.h \
    relationsid.h

FORMS    += performersproject.ui
