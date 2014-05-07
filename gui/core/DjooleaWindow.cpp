#include <QCoreApplication>
#include "DjooleaWindow.h"
#include "ui_DjooleaWindow.h"

const QString DjooleaWindow::STS_GROUP = QString("djoolea_settings_group");
const QString DjooleaWindow::STS_GEOM = QString("setts_geom");
const QString DjooleaWindow::STS_GEOM_SPLITTER = QString("setts_geom_content_split");

DjooleaWindow::DjooleaWindow(QWidget *parent) :
        QMainWindow(parent), ui_(new Ui::DjooleaWindow) {
    ui_->setupUi(this);
    settingsFile =  QApplication::applicationDirPath() + "/djoolea-setts.ini";
    initGui();
}

DjooleaWindow::~DjooleaWindow() {
    delete ui_;
}

void DjooleaWindow::initGui() {
    ui_->searchLineEdit->setPlaceholderText("Search");

    loadSettings();
}

void DjooleaWindow::loadSettings() {
    QSettings settings(settingsFile, QSettings::NativeFormat);
    QByteArray geometrySetts = settings.value(STS_GEOM).toByteArray();
    QByteArray splitterSetts = settings.value(STS_GEOM_SPLITTER).toByteArray();

    if(!restoreGeometry(geometrySetts)) {
         qDebug() << Q_FUNC_INFO << "Init window geometry";
         //TODO set window postion to middle of screen
    }

    if(!ui_->contentSplitter->restoreState(splitterSetts)) {
        qDebug() << Q_FUNC_INFO << "Init splitter state";
        ui_->contentSplitter->setSizes(QList<int>() << 300 << width() - 300);
    }
}

void DjooleaWindow::saveSettings() {
    QSettings settings(settingsFile, QSettings::NativeFormat);
    qDebug() << Q_FUNC_INFO << "saving window geometry";
    settings.setValue(STS_GEOM, saveGeometry());

    qDebug() << Q_FUNC_INFO << "saving splitter state";
    settings.setValue(STS_GEOM_SPLITTER, ui_->contentSplitter->saveState());
}

void DjooleaWindow::closeEvent(QCloseEvent *event) {
    saveSettings();
}
