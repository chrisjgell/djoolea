#include "DjooleaWindow.h"
#include "ui_DjooleaWindow.h"

const QString DjooleaWindow::STS_GROUP = QString("djoolea_settings_group");
const QString DjooleaWindow::STS_GEOMETRY = QString("geom");
const QString DjooleaWindow::STS_SPLITTER = QString("setts_geom_content_split");

DjooleaWindow::DjooleaWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::DjooleaWindow)
{
    ui_->setupUi(this);

    settings_.beginGroup(STS_GROUP);

    initGui();
}

DjooleaWindow::~DjooleaWindow()
{
    delete ui_;
}

void DjooleaWindow::initGui()
{ 
    restoreGeometry(settings_.value(STS_GEOMETRY).toByteArray());

    if(!ui_->contentSplitter->restoreGeometry(settings_.value(STS_SPLITTER).toByteArray())) {
        ui_->contentSplitter->setSizes(QList<int>() << 300 << width() - 300);
    }
}

void DjooleaWindow::storeGeometry()
{
    settings_.setValue(STS_GEOMETRY, saveGeometry());
    settings_.setValue(STS_SPLITTER, ui_->contentSplitter->saveState());
}

void DjooleaWindow::resizeEvent(QResizeEvent* event)
{
    storeGeometry();
}
