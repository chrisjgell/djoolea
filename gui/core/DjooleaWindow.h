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
    void resizeEvent(QResizeEvent* event);

private:

    static const QString STS_GROUP;
    static const QString STS_GEOM;
    static const QString STS_GEOM_SPLITTER;

    void initGui();

    void saveGuiSettings();

    void loadGuiSettings();

    QSettings settings_;

    Ui::DjooleaWindow *ui_;

};

#endif // DJOOLEAWINDOW_H