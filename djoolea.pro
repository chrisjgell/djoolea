TEMPLATE = subdirs

SUBDIRS += \
    gui \
    app \
    lib

#Dependencies
app.depends = gui
gui.depends = lib
