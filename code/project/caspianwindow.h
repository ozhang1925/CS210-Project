#ifndef CASPIANWINDOW_H
#define CASPIANWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "levels.h"

namespace Ui {
class CaspianWindow;
}

class CaspianWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CaspianWindow(Levels* level, QWidget *parent = nullptr);
    ~CaspianWindow();

private slots:
    void on_button_c_village_clicked();

    void on_listWidget_cas_crew_itemClicked(QListWidgetItem *item);

    void on_button_c_lighthouse_clicked();

    void on_button_c_oasis_clicked();

    void on_button_c_oil_clicked();

    void on_button_c_safehouse_clicked();

    void on_button_c_ship_clicked();

    void on_button_c_jail_clicked();

    void on_button_c_sniper_clicked();

    void on_button_cas_continue_clicked();

    void on_button_cas_talk_clicked();

private:
    Ui::CaspianWindow *ui;

    void updateCrewList();
};

#endif // CASPIANWINDOW_H
