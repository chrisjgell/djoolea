#-------------------------------------------------
#
# Project created by QtCreator 2014-05-06T21:33:53
#
#-------------------------------------------------

QT       -= gui

TARGET = djoolea-lib-services
TEMPLATE = lib

DEFINES += SERVICES_LIBRARY

SOURCES += \
    DjooleaPlayerService.cpp \
    DjooleaFileService.cpp

HEADERS +=\
        services_global.h \
    DjooleaPlayerService.h \
    DjooleaFileService.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
