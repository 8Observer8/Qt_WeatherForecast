#-------------------------------------------------
#
# Project created by QtCreator 2014-07-05T11:43:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeatherForecast
TEMPLATE = app


SOURCES += main.cpp\
        Dialog.cpp

HEADERS  += Dialog.h \
    CurrentCondition.h

FORMS    += Dialog.ui
