#include "dialogwindow.h"
#include "ui_dialogwindow.h"
#include "person.h"

DialogNode* currentTextNode;

DialogWindow::DialogWindow(Person* person, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogWindow)
{
    ui->setupUi(this);

    ui->label->setText(person->name);

    currentTextNode = person->dialog->root;
    ui->text_dialog->setPlainText(currentTextNode->text);
}

DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::on_button_dialog_one_clicked()
{
    if (currentTextNode->one == nullptr) {
        return;
    }
    currentTextNode = currentTextNode->one;
    ui->text_dialog->setPlainText(currentTextNode->text);
}


void DialogWindow::on_button_dialog_two_clicked()
{
    if (currentTextNode->two == nullptr) {
        return;
    }
    currentTextNode = currentTextNode->two;
    ui->text_dialog->setPlainText(currentTextNode->text);
}


void DialogWindow::on_button_dialog_close_clicked()
{
    this->close();
}

