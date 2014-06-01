#ifndef PLAYERCONTROLSWIDGET_H
#define PLAYERCONTROLSWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QIcon>

namespace Ui {
class PlayerControlsWidget;
}

class PlayerControlsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerControlsWidget(QWidget *parent = 0);
    ~PlayerControlsWidget();

signals:
    void play();
    void pause();

public slots:
    void onPlay();
    void onPause();
    void onStop();

private:
    void initGui();
    void initConnections();

private slots:
    void playClicked();
    void pauseClicked();
    void prevClicked();
    void nextClicked();
    void shuffleClicked();
    void shuffleOnClicked();
    void repeatClicked();
    void repeatOnClicked();
    void repeatOneOnClicked();

private:
    Ui::PlayerControlsWidget *ui;
};

#endif // PLAYERCONTROLS_H
