#include "caspianwindow.h"
#include "ui_caspianwindow.h"
#include "location.h"
#include "dialogwindow.h"
#include "citywindow.h"
#include <QMapIterator>

Location* caspian;
Player* playerCas;
Point* currentPointCas;
Person* currentCrewCas;
Levels* levelQueueCas;

void CaspianWindow::updateCrewList() {
    QMapIterator<QString, Person*> i(playerCas->aurora->crew);
    while(i.hasNext()) {
        i.next();
        ui->listWidget_cas_crew->addItem(i.key());
    }
}

CaspianWindow::CaspianWindow(Levels* levels, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CaspianWindow)
{
    ui->setupUi(this);

    caspian = levels->levels.front();
    playerCas = levels->player;
    playerCas->day += caspian->addDay;
    levelQueueCas = levels;

    ui->lcdNumber_cas_odo->display(caspian->km);
    ui->lcdNumber_cas_day->display(playerCas->day);
    ui->lcdNumber_cas_energy->display(playerCas->energy);

    ui->button_c_lighthouse->setEnabled(false);
    ui->button_c_lighthouse->setVisible(false);
    ui->button_c_oasis->setEnabled(false);
    ui->button_c_oasis->setVisible(false);
    ui->button_c_oil->setEnabled(false);
    ui->button_c_oil->setVisible(false);

    ui->button_c_safehouse->setEnabled(false);
    ui->button_c_safehouse->setVisible(false);

    ui->button_c_ship->setEnabled(false);
    ui->button_c_ship->setVisible(false);
    ui->button_c_jail->setEnabled(false);
    ui->button_c_jail->setVisible(false);
    ui->button_c_sniper->setEnabled(false);
    ui->button_c_sniper->setVisible(false);

    ui->button_cas_talk->setEnabled(false);
    ui->button_cas_talk->setVisible(false);

    updateCrewList();
}

CaspianWindow::~CaspianWindow()
{
    delete ui;
}

void CaspianWindow::on_listWidget_cas_crew_itemClicked(QListWidgetItem *item)
{
    currentCrewCas = playerCas->aurora->crew[item->text()];
    ui->textBrowser_vol->setPlainText(currentCrewCas->info);
    ui->button_cas_talk->setEnabled(true);
    ui->button_cas_talk->setVisible(true);
}

void CaspianWindow::on_button_c_village_clicked()
{
    currentPointCas = caspian->points["home"].front();
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->button_c_village->setEnabled(false);
        ui->button_c_village->setVisible(false);

        ui->button_c_lighthouse->setEnabled(true);
        ui->button_c_lighthouse->setVisible(true);

        ui->button_c_safehouse->setEnabled(true);
        ui->button_c_safehouse->setVisible(true);

        ui->button_c_ship->setEnabled(true);
        ui->button_c_ship->setVisible(true);
        ui->button_c_jail->setEnabled(true);
        ui->button_c_jail->setVisible(true);
        ui->button_c_sniper->setEnabled(true);
        ui->button_c_sniper->setVisible(true);
    }
}

void CaspianWindow::on_button_c_lighthouse_clicked()
{
    currentPointCas = caspian->points["village"].front();
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->button_c_lighthouse->setEnabled(false);
        ui->button_c_lighthouse->setVisible(false);

        ui->button_c_oasis->setEnabled(true);
        ui->button_c_oasis->setVisible(true);
    }
}

void CaspianWindow::on_button_c_oasis_clicked()
{
    currentPointCas = caspian->points["lighthouse"].front();
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->button_c_oasis->setEnabled(false);
        ui->button_c_oasis->setVisible(false);

        ui->button_c_oil->setEnabled(true);
        ui->button_c_oil->setVisible(true);
    }
}

void CaspianWindow::on_button_c_oil_clicked()
{
    currentPointCas = caspian->points["oasis"].front();
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->frame_cas_map->setEnabled(false);
        ui->listWidget_cas_crew->clear();
        updateCrewList();
    }
}

void CaspianWindow::on_button_c_safehouse_clicked()
{
    currentPointCas = caspian->points["home"][1];
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
}

void CaspianWindow::on_button_c_ship_clicked()
{
    currentPointCas = caspian->points["home"][2];
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->button_c_ship->setEnabled(false);
        ui->button_c_ship->setVisible(false);
    }
}

void CaspianWindow::on_button_c_jail_clicked()
{
    currentPointCas = caspian->points["home"][3];
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->button_c_jail->setEnabled(false);
        ui->button_c_jail->setVisible(false);
    }
}

void CaspianWindow::on_button_c_sniper_clicked()
{
    currentPointCas = caspian->points["home"][4];
    ui->text_cas_sub->setPlainText(currentPointCas->checkEnergy(playerCas));
    ui->lcdNumber_cas_energy->display(playerCas->energy);
    if (currentPointCas->done) {
        ui->button_c_sniper->setEnabled(false);
        ui->button_c_sniper->setVisible(false);
    }
}

void CaspianWindow::on_button_cas_continue_clicked()
{
    if (caspian->points["oasis"].front()->done) {
        playerCas->energy = playerCas->maxEnergy;
        playerCas->moral = 0;
        delete levelQueueCas->levels.front();
        levelQueueCas->levels.pop();
        levelQueueCas->setCityDialog();
        CityWindow* deadCity = new CityWindow(levelQueueCas);
        deadCity->setAttribute(Qt::WA_DeleteOnClose);
        deadCity->show();
        this->close();
    }
}

void CaspianWindow::on_button_cas_talk_clicked()
{
    DialogWindow* dialog = new DialogWindow(currentCrewCas);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}

