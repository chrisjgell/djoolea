#-------------------------------------------------
#
# Project created by QtCreator 2014-05-06T21:33:53
#
#-------------------------------------------------

QT       -= gui

TARGET = services
TEMPLATE = lib

DEFINES += SERVICES_LIBRARY

SOURCES += DjooleaPlayerService.cpp \
    DjooleaDataService.cpp

HEADERS += DjooleaPlayerService.h\
        services_global.h \
    DjooleaDataService.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
