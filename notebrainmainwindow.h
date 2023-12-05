#ifndef NOTEBRAINMAINWINDOW_H
#define NOTEBRAINMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class NoteBrainMainWindow;
}
QT_END_NAMESPACE

class NoteBrainMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    NoteBrainMainWindow(QWidget *parent = nullptr);
    ~NoteBrainMainWindow();

private:
    Ui::NoteBrainMainWindow *ui;
};
#endif // NOTEBRAINMAINWINDOW_H
