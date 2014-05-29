#-------------------------------------------------
#
# Project created by QtCreator 2013-12-14T17:24:28
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = djoolea-gui-core
TEMPLATE = lib

SOURCES += DjooleaWindow.cpp \
    PlayerControlsWidget.cpp \
    SearchBarWidget.cpp \
    PlaylistWidget.cpp \
    TrackInfoWidget.cpp
HEADERS  += DjooleaWindow.h \
    PlayerControlsWidget.h \
    SearchBarWidget.h \
    PlaylistWidget.h \
    TrackInfoWidget.h
FORMS    += DjooleaWindow.ui \
    PlayerControlsWidget.ui \
    SearchBarWidget.ui \
    PlaylistWidget.ui \
    TrackInfoWidget.ui

RESOURCES +=


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../data/release/ -ldjoolea-gui-data
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../data/debug/ -ldjoolea-gui-data
else:unix: LIBS += -L$$OUT_PWD/../data/ -ldjoolea-gui-data

INCLUDEPATH += $$PWD/../data
DEPENDPATH += $$PWD/../data
