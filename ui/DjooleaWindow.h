#ifndef DJOOLEAWINDOW_H
#define DJOOLEAWINDOW_H

#include <QMainWindow>
#include <QSettings>

namespace Ui {
class DjooleaWindow;
}

class DjooleaWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DjooleaWindow(QWidget *parent = 0);
    ~DjooleaWindow();
    
protected:
    void resizeEvent(QResizeEvent* event);

private:
    void initGui();

    void storeGeometry();

    QSettings settings_;

    Ui::DjooleaWindow *ui_;

};

#endif // DJOOLEAWINDOW_H
