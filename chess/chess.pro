#-------------------------------------------------
#
# Project created by QtCreator 2022-05-22T21:27:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chess
TEMPLATE = app


SOURCES += main.cpp\
        chess.cpp \
    chessboard.cpp

HEADERS  += chess.h \
    chessboard.h

FORMS    += chess.ui

RESOURCES += \
    image.qrc
