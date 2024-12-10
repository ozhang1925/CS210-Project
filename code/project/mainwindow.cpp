#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <levels.h>
#include "volgawindow.h"

Levels* levels;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/map.png");
    int w = ui->label_m_map->width();
    int h = ui->label_m_map->height();
    ui->label_m_map->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    levels = new Levels();

    ui->lcdNumber_mosc_odo->display(0);
    ui->lcdNumber_mosc_day->display(1);
    ui->lcdNumber_mosc_energy->display(levels->player->energy);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    delete levels->levels.front();
    levels->levels.pop();
    levels->setVolgaDialog();
    VolgaWindow* volga = new VolgaWindow(levels);
    volga->setAttribute(Qt::WA_DeleteOnClose);
    volga->show();
    this->close();
}
