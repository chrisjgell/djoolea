include(images/images.pri)

TARGET = djoolea-gui-data
TEMPLATE = lib

RESOURCES += \
    images.qrc

HEADERS += \
    ResourceLoader.h

SOURCES += \
    ResourceLoader.cpp
