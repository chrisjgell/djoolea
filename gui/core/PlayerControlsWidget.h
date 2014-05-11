#ifndef PLAYERCONTROLSWIDGET_H
#define PLAYERCONTROLSWIDGET_H

#include <QWidget>

namespace Ui {
class PlayerControlsWidget;
}

class PlayerControlsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerControlsWidget(QWidget *parent = 0);
    ~PlayerControlsWidget();

private:
    Ui::PlayerControlsWidget *ui;
};

#endif // PLAYERCONTROLS_H
