#ifndef DJOOLEAWINDOW_H
#define DJOOLEAWINDOW_H

#include "PlayerControlsWidget.h"

#include <QMainWindow>
#include <QSettings>
#include <QtDebug>


namespace Ui {
    class DjooleaWindow;
}

class DjooleaWindow : public QMainWindow {
    Q_OBJECT
    
public:
    explicit DjooleaWindow(QWidget *parent = 0);

    ~DjooleaWindow();   
protected:
    void closeEvent(QCloseEvent* event);

private:

    static const QString STS_GROUP;
    static const QString STS_GEOM;
    static const QString STS_GEOM_SPLITTER;

    void initGui();

    void initSidebar();

    void initPlaylist();

    void initControls();

    void initStyles();

    void saveSettings();

    void loadSettings();

    QString getSettingsFilename();

private slots:

private:
    Ui::DjooleaWindow *ui;
    PlayerControlsWidget *m_playerControls;
};

#endif // DJOOLEAWINDOW_H
