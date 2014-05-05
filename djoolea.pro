TEMPLATE = subdirs

SUBDIRS += \
    gui \
    app

#Dependencies
app.depends = gui
