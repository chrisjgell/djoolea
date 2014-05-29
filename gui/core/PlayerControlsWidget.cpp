#include <QDebug>
#include "PlayerControlsWidget.h"
#include "ui_PlayerControlsWidget.h"

PlayerControlsWidget::PlayerControlsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayerControlsWidget) {
    ui->setupUi(this);
    initGui();
}

PlayerControlsWidget::~PlayerControlsWidget() {
    delete ui;
}

void PlayerControlsWidget::initGui() {
    qDebug() << Q_FUNC_INFO << "setting player controls images";
    //initPlayButton();
}

void PlayerControlsWidget::initPlayButton() {

    QPixmap playButtonPixmap(QString::fromUtf8(":/images/controls/play"));
    QIcon playButtonIcon(playButtonPixmap);
    ui->playButton->setIcon(playButtonIcon);
    ui->playButton->setIconSize(playButtonPixmap.rect().size());
   // ui->playButton->setText("");
   // ui->playButton->setMinimumHeight(playButtonPixmap.rect().height());
   // ui->playButton->setMinimumWidth(playButtonPixmap.rect().width());
}
