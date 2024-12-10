#include "endwindow.h"
#include "ui_endwindow.h"
#include "location.h"
#include <QMapIterator>

Location* irkutsk;
Player* playerIr;
Person* currentCrewIr;
Levels* levelQueueIr;

void EndWindow::updateCrewList() {
    QMapIterator<QString, Person*> i(playerIr->aurora->crew);
    while (i.hasNext()) {
        i.next();
        ui->listWidget_ir_crew->addItem(i.key());
    }
}

EndWindow::EndWindow(Levels* levels, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EndWindow)
{
    ui->setupUi(this);

    irkutsk = levels->levels.front();
    playerIr = levels->player;
    playerIr->day += irkutsk->addDay;
    levelQueueIr = levels;

    ui->lcdNumber_ir_odo->display(irkutsk->km);
    ui->lcdNumber_ir_day->display(playerIr->day);

    updateCrewList();

    if (playerIr->aurora->crew.size() > 6) {
        ui->textBrowser_ir->setPlainText(irkutsk->points["homeIr"].front()->text);
    }
    else {
        ui->textBrowser_ir->setPlainText(irkutsk->points["homeIr"].front()->altText);
    }

}

EndWindow::~EndWindow()
{
    delete ui;
}

void EndWindow::on_button_ir_end_clicked()
{
    delete levelQueueIr->levels.front();
    levelQueueIr->levels.pop();
    delete levelQueueIr;
    std::cout << "Successful shutdown :)" << std:: endl;
    this->close();
}


void EndWindow::on_listWidget_ir_crew_itemClicked(QListWidgetItem *item)
{
    currentCrewIr = playerIr->aurora->crew[item->text()];
    ui->textBrowser_ir->setPlainText(currentCrewIr->info);
}

