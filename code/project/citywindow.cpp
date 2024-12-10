#include "citywindow.h"
#include "ui_citywindow.h"
#include "location.h"
#include "dialogwindow.h"
#include "endwindow.h"
#include <QMapIterator>

Location* deadCity;
Player* playerDC;
Point* currentPointDC;
Person* currentCrewDC;
Levels* levelQueueDC;

void CityWindow::updateCrewList() {
    QMapIterator<QString, Person*> i(playerDC->aurora->crew);
    while(i.hasNext()) {
        i.next();
        ui->listWidget_dc_crew->addItem(i.key());
    }
}

CityWindow::CityWindow(Levels* levels, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CityWindow)
{
    ui->setupUi(this);

    deadCity = levels->levels.front();
    playerDC = levels->player;
    playerDC->day += deadCity->addDay;
    levelQueueDC = levels;

    ui->lcdNumber_dc_odo->display(deadCity->km);
    ui->lcdNumber_dc_day->display(playerDC->day);
    ui->lcdNumber_dc_energy->display(playerDC->energy);

    ui->button_dc_under->setEnabled(false);
    ui->button_dc_under->setVisible(false);
    ui->button_dc_above->setEnabled(false);
    ui->button_dc_above->setVisible(false);
    ui->button_dc_institute->setEnabled(false);
    ui->button_dc_institute->setVisible(false);
    ui->button_dc_exit->setEnabled(false);
    ui->button_dc_exit->setVisible(false);

    updateCrewList();
}

CityWindow::~CityWindow()
{
    delete ui;
}

void CityWindow::on_listWidget_dc_crew_itemClicked(QListWidgetItem *item)
{
    currentCrewDC = playerDC->aurora->crew[item->text()];
    ui->textBrowser_vol->setPlainText(currentCrewDC->info);
    ui->button_dc_talk->setEnabled(true);
    ui->button_dc_talk->setVisible(true);
}

void CityWindow::on_button_dc_entrance_clicked()
{
    currentPointDC = deadCity->points["home"].front();
    ui->text_dc_sub->setPlainText(currentPointDC->checkEnergy(playerDC));
    ui->lcdNumber_dc_energy->display(playerDC->energy);
    if (currentPointDC->done) {
        ui->button_dc_entrance->setVisible(false);
        ui->button_dc_entrance->setEnabled(false);
        ui->button_dc_under->setVisible(true);
        ui->button_dc_under->setEnabled(true);
    }
}


void CityWindow::on_button_dc_under_clicked()
{
    currentPointDC = deadCity->points["entrance"].front();
    ui->text_dc_sub->setPlainText(currentPointDC->checkEnergy(playerDC));
    ui->lcdNumber_dc_energy->display(playerDC->energy);
    if (currentPointDC->done) {
        ui->button_dc_under->setVisible(false);
        ui->button_dc_under->setEnabled(false);
        ui->button_dc_above->setVisible(true);
        ui->button_dc_above->setEnabled(true);
        ui->listWidget_dc_crew->clear();
        updateCrewList();
    }
}

void CityWindow::on_button_dc_above_clicked()
{
    currentPointDC = deadCity->points["under"].front();
    ui->text_dc_sub->setPlainText(currentPointDC->checkEnergy(playerDC));
    ui->lcdNumber_dc_energy->display(playerDC->energy);
    if (currentPointDC->done) {
        ui->button_dc_above->setVisible(false);
        ui->button_dc_above->setEnabled(false);
        ui->button_dc_institute->setVisible(true);
        ui->button_dc_institute->setEnabled(true);
    }
}

void CityWindow::on_button_dc_institute_clicked()
{
    currentPointDC = deadCity->points["above"].front();
    ui->text_dc_sub->setPlainText(currentPointDC->checkEnergy(playerDC));
    ui->lcdNumber_dc_energy->display(playerDC->energy);
    if (currentPointDC->done) {
        ui->button_dc_institute->setVisible(false);
        ui->button_dc_institute->setEnabled(false);
        ui->button_dc_exit->setVisible(true);
        ui->button_dc_exit->setEnabled(true);
    }
}

void CityWindow::on_button_dc_exit_clicked()
{
    currentPointDC = deadCity->points["institute"].front();
    ui->text_dc_sub->setPlainText(currentPointDC->checkEnergy(playerDC));
    ui->lcdNumber_dc_energy->display(playerDC->energy);
    if (currentPointDC->done) {
        ui->frame_dc_map->setEnabled(false);
        ui->listWidget_dc_crew->clear();
        updateCrewList();
    }
}


void CityWindow::on_button_dc_talk_clicked()
{
    DialogWindow* dialog = new DialogWindow(currentCrewDC);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}


void CityWindow::on_button_dc_continue_clicked()
{
    if (deadCity->points["institute"].front()->done) {
        playerDC->energy = playerDC->maxEnergy;
        delete levelQueueDC->levels.front();
        levelQueueDC->levels.pop();
        EndWindow* irkutsk = new EndWindow(levelQueueDC);
        irkutsk->setAttribute(Qt::WA_DeleteOnClose);
        irkutsk->show();
        this->close();
    }
}

