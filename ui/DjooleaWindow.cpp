#include "DjooleaWindow.h"
#include "ui_DjooleaWindow.h"

DjooleaWindow::DjooleaWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::DjooleaWindow)
{
    ui_->setupUi(this);

    initGui();
}

DjooleaWindow::~DjooleaWindow()
{
    delete ui_;
}

void DjooleaWindow::initGui()
{ 
    restoreGeometry(settings_.value("geometry").toByteArray());

    //if(ui_->contentSplitter->restoreGeometry(settings_.value()))
    ui_->contentSplitter->setSizes(QList<int>() << 300 << width() - 300);
}

void DjooleaWindow::storeGeometry()
{

}

void DjooleaWindow::resizeEvent(QResizeEvent* event)
{
    storeGeometry();
}
