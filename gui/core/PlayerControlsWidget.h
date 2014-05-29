#ifndef PLAYERCONTROLSWIDGET_H
#define PLAYERCONTROLSWIDGET_H

#include <QWidget>
#include <QIcon>
#include <QPixmap>

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
    void initGui();

private:
    Ui::PlayerControlsWidget *ui;

    void initPlayButton();
};

#endif // PLAYERCONTROLS_H
