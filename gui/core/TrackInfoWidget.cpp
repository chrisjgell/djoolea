#include "TrackInfoWidget.h"
#include "ui_TrackInfoWidget.h"

TrackInfoWidget::TrackInfoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrackInfoWidget) {
    ui->setupUi(this);
    initGui();
}

TrackInfoWidget::~TrackInfoWidget() {
    delete ui;
}

void TrackInfoWidget::initGui() {
    m_defaultAlbumArtPixmap = new QPixmap(QString::fromUtf8(":/images/default_album_art_96x96"));
    ui->trackImage->setPixmap(*m_defaultAlbumArtPixmap);
}
