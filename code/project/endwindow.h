#ifndef ENDWINDOW_H
#define ENDWINDOW_H

#include <QListWidgetItem>
#include <QMainWindow>
#include "levels.h"

namespace Ui {
class EndWindow;
}

class EndWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EndWindow(Levels* levels, QWidget *parent = nullptr);
    ~EndWindow();

private slots:
    void on_button_ir_end_clicked();

    void on_listWidget_ir_crew_itemClicked(QListWidgetItem *item);

private:
    Ui::EndWindow *ui;

    void updateCrewList();
};

#endif // ENDWINDOW_H
