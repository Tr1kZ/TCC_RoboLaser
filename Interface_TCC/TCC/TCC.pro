#-------------------------------------------------
#
# Project created by QtCreator 2016-09-11T00:33:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = TCC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ponto.cpp \
    qcustomplot/qcustomplot.cpp

HEADERS  += mainwindow.h \
    ponto.h \
    qcustomplot/qcustomplot.h

FORMS    += mainwindow.ui
