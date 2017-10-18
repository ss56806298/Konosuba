#-------------------------------------------------
#
# Project created by QtCreator 2017-10-12T17:00:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Konosuba
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    boss.cpp \
    member.cpp \
    team.cpp \
    gamecontroller.cpp \
    chara/kazuma.cpp

HEADERS += \
        mainwindow.h \
    boss.h \
    member.h \
    member_list.h \
    team.h \
    gamecontroller.h \
    constants.h \
    chara/kazuma.h

FORMS += \
        mainwindow.ui \
    battle.ui

TRANSLATIONS = konosuba_zh.ts \
                konosuba_en.ts \
                konosuba_jp.ts

RESOURCES += \
    res.qrc
