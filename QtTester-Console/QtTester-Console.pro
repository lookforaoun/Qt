QT += core
QT -= gui

CONFIG += c++11

TARGET = QtTester-Console
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    qtcontainer.cpp

HEADERS += \
    qtcontainer.h
