#include "moscowwindow.h"
#include "ui_moscowwindow.h"

moscowWindow::moscowWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::moscowWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/map_moscow.png");
    int w = ui->label_map->width();
    int h = ui->label_map->height();
    ui->label_map->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

moscowWindow::~moscowWindow()
{
    delete ui;
}
