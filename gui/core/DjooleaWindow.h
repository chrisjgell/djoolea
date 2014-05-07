#ifndef DJOOLEAWINDOW_H
#define DJOOLEAWINDOW_H

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
private slots:

private:
    Ui::DjooleaWindow *ui_;

    QString settingsFile;
};

#endif // DJOOLEAWINDOW_H
