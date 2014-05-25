#ifndef SEARCHBARWIDGET_H
#define SEARCHBARWIDGET_H

#include <QWidget>

namespace Ui {
class SearchBarWidget;
}

class SearchBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SearchBarWidget(QWidget *parent = 0);
    ~SearchBarWidget();

private:
    Ui::SearchBarWidget *ui;

    void initGui();
};

#endif // SEARCHBARWIDGET_H
