#include "TrackInfoWidget.h"
#include "ui_TrackInfoWidget.h"

TrackInfoWidget::TrackInfoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrackInfoWidget)
{
    ui->setupUi(this);
}

TrackInfoWidget::~TrackInfoWidget()
{
    delete ui;
}
