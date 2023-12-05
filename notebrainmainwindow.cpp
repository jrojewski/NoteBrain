#include "notebrainmainwindow.h"
#include "./ui_notebrainmainwindow.h"

NoteBrainMainWindow::NoteBrainMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteBrainMainWindow)
{
    ui->setupUi(this);
}

NoteBrainMainWindow::~NoteBrainMainWindow()
{
    delete ui;
}
