#ifndef DJOOLEAWINDOW_H
#define DJOOLEAWINDOW_H

#include "PlayerControlsWidget.h"
#include "SearchBarWidget.h"
#include "PlaylistWidget.h"

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

    void saveSettings();

    void loadSettings();

    QString getSettingsFilename();

private slots:

private:
    Ui::DjooleaWindow *ui;
    PlayerControlsWidget *m_playerControls;
    SearchBarWidget *m_searchBar;
    PlaylistWidget *m_playlist;
};

#endif // DJOOLEAWINDOW_H
