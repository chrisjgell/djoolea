#include "PlaylistWidget.h"
#include "ui_PlaylistWidget.h"

PlaylistWidget::PlaylistWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlaylistWidget) {
    ui->setupUi(this);
    initGui();
}

PlaylistWidget::~PlaylistWidget() {
    delete ui;
}

void PlaylistWidget::initGui() {
    ui->listView->setAttribute(Qt::WA_MacShowFocusRect, false);
}
