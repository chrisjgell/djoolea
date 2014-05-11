#include "PlayerControlsWidget.h"
#include "ui_PlayerControlsWidget.h"

PlayerControlsWidget::PlayerControlsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayerControlsWidget)
{
    ui->setupUi(this);
}

PlayerControlsWidget::~PlayerControlsWidget()
{
    delete ui;
}
