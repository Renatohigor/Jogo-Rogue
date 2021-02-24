#-------------------------------------------------
#
# Project created by QtCreator 2017-04-18T12:42:38
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RogueTp2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    GameObject.cpp \
    listwall.cpp \
    menu.cpp \
    gameover.cpp \
    instroctions.cpp \
    creditos.cpp \
    timetostart.cpp

HEADERS  += mainwindow.h \
    GameObject.h \
    Player.h \
    Enemy.h \
    Wall.h \
    Treasure.h \
    cenario.h \
    ListWall.h \
    menu.h \
    gameover.h \
    instroctions.h \
    creditos.h \
    timetostart.h

FORMS    += mainwindow.ui \
    menu.ui \
    gameover.ui \
    instroctions.ui \
    creditos.ui \
    timetostart.ui

RESOURCES += \
    image.qrc \
    som.qrc

DISTFILES +=
