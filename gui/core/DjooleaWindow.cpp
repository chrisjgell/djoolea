#include <QCoreApplication>
#include <QHBoxLayout>
#include "DjooleaWindow.h"
#include "ui_DjooleaWindow.h"
#include "PlayerControlsWidget.h"


const QString DjooleaWindow::STS_GROUP = QString("djoolea_settings_group");
const QString DjooleaWindow::STS_GEOM = QString("setts_geom");
const QString DjooleaWindow::STS_GEOM_SPLITTER = QString("setts_geom_content_split");

DjooleaWindow::DjooleaWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::DjooleaWindow) {
    ui->setupUi(this);
    initGui();
    loadSettings();
}

DjooleaWindow::~DjooleaWindow() {
    delete ui;
    delete m_searchBar;
    delete m_playerControls;
    delete m_playlist;
}

void DjooleaWindow::initGui() {
    m_searchBar = new SearchBarWidget(ui->headerFrame);
    m_playerControls = new PlayerControlsWidget(ui->controlsFrame);
    m_playlist = new PlaylistWidget(ui->playlist);
}

void DjooleaWindow::loadSettings() {
    QSettings settings(getSettingsFilename(), QSettings::NativeFormat);
    QByteArray geometrySetts = settings.value(STS_GEOM).toByteArray();
    QByteArray splitterSetts = settings.value(STS_GEOM_SPLITTER).toByteArray();

    qDebug() << Q_FUNC_INFO << "Init window geometry";
    restoreGeometry(geometrySetts);

    if(!ui->contentSplitter->restoreState(splitterSetts)) {
        qDebug() << Q_FUNC_INFO << "Init splitter state";
        ui->contentSplitter->setSizes(QList<int>() << 300 << width() - 300);
    }
}

void DjooleaWindow::saveSettings() {
    QSettings settings(getSettingsFilename(), QSettings::NativeFormat);
    qDebug() << Q_FUNC_INFO << "saving window geometry";
    settings.setValue(STS_GEOM, saveGeometry());

    qDebug() << Q_FUNC_INFO << "saving splitter state";
    settings.setValue(STS_GEOM_SPLITTER, ui->contentSplitter->saveState());
}

QString DjooleaWindow::getSettingsFilename() {
    return QApplication::applicationDirPath() + "/djoolea-setts.ini";
}

void DjooleaWindow::closeEvent(QCloseEvent *event) {
    saveSettings();
}
