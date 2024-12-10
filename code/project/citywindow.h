#ifndef CITYWINDOW_H
#define CITYWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "levels.h"

namespace Ui {
class CityWindow;
}

class CityWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CityWindow(Levels* levels, QWidget *parent = nullptr);
    ~CityWindow();

private slots:
    void on_listWidget_dc_crew_itemClicked(QListWidgetItem *item);

    void on_button_dc_entrance_clicked();

    void on_button_dc_under_clicked();

    void on_button_dc_above_clicked();

    void on_button_dc_institute_clicked();

    void on_button_dc_exit_clicked();

    void on_button_dc_talk_clicked();

    void on_button_dc_continue_clicked();

private:
    Ui::CityWindow *ui;

    void updateCrewList();
};

#endif // CITYWINDOW_H
