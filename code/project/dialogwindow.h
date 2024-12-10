#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QDialog>
#include "person.h"

namespace Ui {
class DialogWindow;
}

class DialogWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWindow(Person* person, QWidget *parent = nullptr);
    ~DialogWindow();

private slots:

    void on_button_dialog_one_clicked();

    void on_button_dialog_two_clicked();

    void on_button_dialog_close_clicked();

private:
    Ui::DialogWindow *ui;
};

#endif // DIALOGWINDOW_H
