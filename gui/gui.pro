TEMPLATE = subdirs

SUBDIRS += \
    core \
    data

core.depends = data
