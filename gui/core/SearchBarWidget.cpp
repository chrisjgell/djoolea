#include "SearchBarWidget.h"
#include "ui_SearchBarWidget.h"

SearchBarWidget::SearchBarWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchBarWidget) {
    ui->setupUi(this);
    initGui();
}

SearchBarWidget::~SearchBarWidget() {
    delete ui;
}

void SearchBarWidget::initGui() {
    ui->searchLineEdit->setPlaceholderText("Search");
    ui->searchLineEdit->setAttribute(Qt::WA_MacShowFocusRect, false);
}
