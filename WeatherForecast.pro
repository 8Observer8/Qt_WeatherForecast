#-------------------------------------------------
#
# Project created by QtCreator 2014-07-05T11:43:33
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeatherForecast
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        Dialog.cpp

HEADERS  += Dialog.h \
    CurrentCondition.h \
    Weather.h \
    City.h \
    NetworkManager.h \
    LogicError.h \
    EmptyArgument.h

FORMS    += Dialog.ui
