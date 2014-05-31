QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = djoolea-app

TEMPLATE = app

SOURCES += main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../gui/core/release/ -ldjoolea-gui-core
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../gui/core/debug/ -ldjoolea-gui-core
else:unix: LIBS += -L$$OUT_PWD/../gui/core/ -ldjoolea-gui-core

INCLUDEPATH += $$PWD/../gui/core
DEPENDPATH += $$PWD/../gui/core


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../gui/data/release/ -ldjoolea-gui-data
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../gui/data/debug/ -ldjoolea-gui-data
else:unix: LIBS += -L$$OUT_PWD/../gui/data/ -ldjoolea-gui-data

INCLUDEPATH += $$PWD/../gui/data
DEPENDPATH += $$PWD/../gui/data
