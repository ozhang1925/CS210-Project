#ifndef VOLGAWINDOW_H
#define VOLGAWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "levels.h"

namespace Ui {
class VolgaWindow;
}

class VolgaWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VolgaWindow(Levels *level, QWidget *parent = nullptr);
    ~VolgaWindow();

private slots:
    void on_button_volga_church_clicked();

    void on_button_volga_radDump_clicked();

    void on_button_volga_crane_clicked();

    void on_button_volga_terminal_clicked();

    void on_button_volga_safehouse_clicked();

    void on_listWidget_vol_crew_itemClicked(QListWidgetItem *item);

    void updateCrewList();

    void on_button_volga_bridge_clicked();

    void on_button_volga_banditTower_clicked();

    void on_button_volga_banditCamp_clicked();

    void on_button_volga_oilTank_clicked();

    void on_button_volga_talk_clicked();

    void on_button_vol_continue_clicked();

private:
    Ui::VolgaWindow *ui;
};

#endif // VOLGAWINDOW_H
