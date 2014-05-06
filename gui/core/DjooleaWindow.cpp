#include "DjooleaWindow.h"
#include "ui_DjooleaWindow.h"

const QString DjooleaWindow::STS_GROUP = QString("djoolea_settings_group");
const QString DjooleaWindow::STS_GEOM = QString("setts_geom");
const QString DjooleaWindow::STS_GEOM_SPLITTER = QString("setts_geom_content_split");

DjooleaWindow::DjooleaWindow(QWidget *parent) :
        QMainWindow(parent), ui_(new Ui::DjooleaWindow) {

    ui_->setupUi(this);
    settings_.beginGroup(STS_GROUP);
    initGui();
}

DjooleaWindow::~DjooleaWindow() {
    delete ui_;
}

void DjooleaWindow::initGui() {
    restoreGeometry(settings_.value(STS_GEOM).toByteArray());

    QByteArray geometrySetts = settings_.value(STS_GEOM).toByteArray();
    QByteArray splitterSetts = settings_.value(STS_GEOM_SPLITTER).toByteArray();

    if(!restoreGeometry(geometrySetts)) {

    }

    if(!ui_->contentSplitter->restoreGeometry(splitterSetts)) {
        qDebug() << Q_FUNC_INFO << "Initialising contentSplitter settings";
        ui_->contentSplitter->setSizes(QList<int>() << 300 << width() - 300);
    }
}

void DjooleaWindow::saveGuiSettings() {
    qDebug() << Q_FUNC_INFO << "saving window geometry";
    settings_.setValue(STS_GEOM, saveGeometry());

    qDebug() << Q_FUNC_INFO << "saving contentSplitter geometry";
    settings_.setValue(STS_GEOM_SPLITTER, ui_->contentSplitter->saveState());
}

void DjooleaWindow::loadGuiSettings() {

}

void DjooleaWindow::resizeEvent(QResizeEvent* event) {
    saveGuiSettings();
}
