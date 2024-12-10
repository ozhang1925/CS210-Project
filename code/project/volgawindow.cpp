#include "volgawindow.h"
#include "ui_volgawindow.h"
#include "location.h"
#include "dialogwindow.h"
#include "caspianwindow.h"
#include <QMapIterator>

Location* volga;
Levels* levelQueue;
Player* player;
Point* currentPoint;
Person* currentCrew;

void VolgaWindow::updateCrewList() {
    QMapIterator<QString, Person*> i(player->aurora->crew);
    while(i.hasNext()) {
        i.next();
        ui->listWidget_vol_crew->addItem(i.key());
    }
}

VolgaWindow::VolgaWindow(Levels* levels, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VolgaWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/map_volga.png");
    int w = ui->label_map_volga->width();
    int h = ui->label_map_volga->height();
    ui->label_map_volga->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    volga = levels->levels.front();
    levelQueue = levels;
    player = levels->player;
    player->day += volga->addDay;

    ui->lcdNumber_volga_odo->display(volga->km);
    ui->lcdNumber_volga_day->display(player->day);
    ui->lcdNumber_volga_energy->display(player->energy);

    ui->button_volga_radDump->setVisible(false);
    ui->button_volga_radDump->setEnabled(false);
    ui->button_volga_crane->setVisible(false);
    ui->button_volga_crane->setEnabled(false);
    ui->button_volga_terminal->setVisible(false);
    ui->button_volga_terminal->setEnabled(false);
    ui->button_volga_bridge->setVisible(false);
    ui->button_volga_bridge->setEnabled(false);

    ui->button_volga_safehouse->setEnabled(false);
    ui->button_volga_safehouse->setVisible(false);

    ui->button_volga_banditTower->setEnabled(false);
    ui->button_volga_banditTower->setVisible(false);
    ui->button_volga_banditCamp->setEnabled(false);
    ui->button_volga_banditCamp->setVisible(false);
    ui->button_volga_oilTank->setEnabled(false);
    ui->button_volga_oilTank->setVisible(false);

    ui->button_volga_talk->setEnabled(false);
    ui->button_volga_talk->setVisible(false);

    updateCrewList();
}

VolgaWindow::~VolgaWindow()
{
    delete ui;
}

void VolgaWindow::on_listWidget_vol_crew_itemClicked(QListWidgetItem *item)
{
    currentCrew = player->aurora->crew[item->text()];
    ui->textBrowser_vol->setPlainText(currentCrew->info);
    ui->button_volga_talk->setEnabled(true);
    ui->button_volga_talk->setVisible(true);
}

 void VolgaWindow::on_button_volga_talk_clicked()
{
    DialogWindow* dialog = new DialogWindow(currentCrew);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}

void VolgaWindow::on_button_volga_church_clicked()
{
    currentPoint = volga->points["home"].front();
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_church->setEnabled(false);
        ui->button_volga_church->setVisible(false);
        ui->button_volga_radDump->setVisible(true);
        ui->button_volga_radDump->setEnabled(true);

        ui->button_volga_safehouse->setEnabled(true);
        ui->button_volga_safehouse->setVisible(true);

        ui->button_volga_banditTower->setEnabled(true);
        ui->button_volga_banditTower->setVisible(true);
        ui->button_volga_banditCamp->setEnabled(true);
        ui->button_volga_banditCamp->setVisible(true);
        ui->button_volga_oilTank->setEnabled(true);
        ui->button_volga_oilTank->setVisible(true);

        ui->listWidget_vol_crew->clear();
        updateCrewList();
    }
}

void VolgaWindow::on_button_volga_radDump_clicked()
{
    currentPoint = volga->points["church"].front();
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_radDump->setVisible(false);
        ui->button_volga_radDump->setEnabled(false);
        ui->button_volga_crane->setVisible(true);
        ui->button_volga_crane->setEnabled(true);
    }
}

void VolgaWindow::on_button_volga_crane_clicked()
{
    currentPoint = volga->points["radDump"].front();
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_crane->setVisible(false);
        ui->button_volga_crane->setEnabled(false);
        ui->button_volga_terminal->setVisible(true);
        ui->button_volga_terminal->setEnabled(true);

        ui->listWidget_vol_crew->clear();
        updateCrewList();
    }
}

void VolgaWindow::on_button_volga_terminal_clicked()
{
    currentPoint = volga->points["crane"].front();
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_terminal->setVisible(false);
        ui->button_volga_terminal->setEnabled(false);
        ui->button_volga_bridge->setVisible(true);
        ui->button_volga_bridge->setEnabled(true);
    }
}

void VolgaWindow::on_button_volga_bridge_clicked()
{
    currentPoint = volga->points["terminal"].front();
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->frame_vol_map->setEnabled(false);
        ui->listWidget_vol_crew->clear();
        updateCrewList();
    }
}

void VolgaWindow::on_button_volga_safehouse_clicked()
{
    currentPoint = volga->points["home"][1];
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    ui->lcdNumber_volga_day->display(player->day);
}

void VolgaWindow::on_button_volga_banditTower_clicked()
{
    currentPoint = volga->points["home"][2];
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_banditTower->setEnabled(false);
        ui->button_volga_banditTower->setVisible(false);
    }
}

void VolgaWindow::on_button_volga_banditCamp_clicked()
{
    currentPoint = volga->points["home"][3];
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_banditCamp->setEnabled(false);
        ui->button_volga_banditCamp->setVisible(false);
    }
}

void VolgaWindow::on_button_volga_oilTank_clicked()
{
    currentPoint = volga->points["home"][4];
    ui->text_volga_sub->setPlainText(currentPoint->checkEnergy(player));
    ui->lcdNumber_volga_energy->display(player->energy);
    if (currentPoint->done) {
        ui->button_volga_oilTank->setEnabled(false);
        ui->button_volga_oilTank->setVisible(false);
    }
}

void VolgaWindow::on_button_vol_continue_clicked()
{
    if (volga->points["terminal"].front()->done) {
        player->energy = player->maxEnergy;
        player->moral = 0;
        delete levelQueue->levels.front();
        levelQueue->levels.pop();
        levelQueue->setCaspianDialog();
        CaspianWindow* caspian = new CaspianWindow(levelQueue);
        caspian->setAttribute(Qt::WA_DeleteOnClose);
        caspian->show();
        this->close();
    }
}

