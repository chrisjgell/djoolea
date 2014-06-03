#include <QDebug>
#include <QPixmap>
#include <QIcon>
#include "PlayerControlsWidget.h"
#include "ui_PlayerControlsWidget.h"

PlayerControlsWidget::PlayerControlsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayerControlsWidget) {
    ui->setupUi(this);
    initGui();
    initConnections();
}

PlayerControlsWidget::~PlayerControlsWidget() {
    delete ui;
}

void PlayerControlsWidget::initGui() {
    qDebug() << Q_FUNC_INFO << "init gui";
    ui->shuffleStackedWidget->setCurrentWidget(ui->shuffleButtonArea);
    ui->repeatStackedWidget->setCurrentWidget(ui->repeatButtonArea);
    onStop();
}

void PlayerControlsWidget::initConnections() {
    qDebug() << Q_FUNC_INFO << "init signal/slots connections";
    connect(ui->playButton, SIGNAL(clicked()), this, SLOT(playClicked()));
    connect(ui->pauseButton, SIGNAL(clicked()), this, SLOT(pauseClicked()));
    connect(ui->prevButton, SIGNAL(clicked()), this, SLOT(prevClicked()));
    connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(nextClicked()));
    connect(ui->shuffleButton, SIGNAL(clicked()), this, SLOT(shuffleClicked()));
    connect(ui->shuffleOnButton,SIGNAL(clicked()), this, SLOT(shuffleOnClicked()));
    connect(ui->repeatButton, SIGNAL(clicked()), this, SLOT(repeatClicked()));
    connect(ui->repeatOnButton, SIGNAL(clicked()), this, SLOT(repeatOnClicked()));
    connect(ui->repeatOneOnButton, SIGNAL(clicked()), this, SLOT(repeatOneOnClicked()));
}

void PlayerControlsWidget::onPlay() {

}

void PlayerControlsWidget::onPause() {

}

void PlayerControlsWidget::onStop() {
    ui->playStackedWidget->setCurrentWidget(ui->playButtonArea);
}

void PlayerControlsWidget::playClicked() {
    ui->playStackedWidget->setCurrentWidget(ui->pauseButtonArea);
}

void PlayerControlsWidget::pauseClicked() {
    ui->playStackedWidget->setCurrentWidget(ui->playButtonArea);
}

void PlayerControlsWidget::prevClicked() {

}

void PlayerControlsWidget::nextClicked() {

}

void PlayerControlsWidget::shuffleClicked() {
    ui->shuffleStackedWidget->setCurrentWidget(ui->shuffleOnButtonArea);
}

void PlayerControlsWidget::shuffleOnClicked() {
    ui->shuffleStackedWidget->setCurrentWidget(ui->shuffleButtonArea);
}

void PlayerControlsWidget::repeatClicked() {
    ui->repeatStackedWidget->setCurrentWidget(ui->repeatOnButtonArea);
}

void PlayerControlsWidget::repeatOnClicked() {
    ui->repeatStackedWidget->setCurrentWidget(ui->repeatOneOnButtonArea);
}

void PlayerControlsWidget::repeatOneOnClicked() {
    ui->repeatStackedWidget->setCurrentWidget(ui->repeatButtonArea);
}
