#ifndef MOSCOWWINDOW_H
#define MOSCOWWINDOW_H

#include <QMainWindow>

namespace Ui {
class moscowWindow;
}

class moscowWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit moscowWindow(QWidget *parent = nullptr);
    ~moscowWindow();

private:
    Ui::moscowWindow *ui;
};

#endif // MOSCOWWINDOW_H
