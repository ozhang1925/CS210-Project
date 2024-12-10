/********************************************************************************
** Form generated from reading UI file 'dialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWINDOW_H
#define UI_DIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogWindow
{
public:
    QPushButton *button_dialog_one;
    QPushButton *button_dialog_two;
    QPushButton *button_dialog_close;
    QTextBrowser *text_dialog;
    QLabel *label;

    void setupUi(QDialog *DialogWindow)
    {
        if (DialogWindow->objectName().isEmpty())
            DialogWindow->setObjectName("DialogWindow");
        DialogWindow->resize(581, 216);
        button_dialog_one = new QPushButton(DialogWindow);
        button_dialog_one->setObjectName("button_dialog_one");
        button_dialog_one->setGeometry(QRect(10, 180, 80, 25));
        button_dialog_two = new QPushButton(DialogWindow);
        button_dialog_two->setObjectName("button_dialog_two");
        button_dialog_two->setGeometry(QRect(100, 180, 80, 25));
        button_dialog_close = new QPushButton(DialogWindow);
        button_dialog_close->setObjectName("button_dialog_close");
        button_dialog_close->setGeometry(QRect(490, 180, 80, 25));
        text_dialog = new QTextBrowser(DialogWindow);
        text_dialog->setObjectName("text_dialog");
        text_dialog->setGeometry(QRect(10, 40, 561, 131));
        label = new QLabel(DialogWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 561, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(DialogWindow);

        QMetaObject::connectSlotsByName(DialogWindow);
    } // setupUi

    void retranslateUi(QDialog *DialogWindow)
    {
        DialogWindow->setWindowTitle(QCoreApplication::translate("DialogWindow", "Dialog", nullptr));
        button_dialog_one->setText(QCoreApplication::translate("DialogWindow", "Option 1", nullptr));
        button_dialog_two->setText(QCoreApplication::translate("DialogWindow", "Option 2", nullptr));
        button_dialog_close->setText(QCoreApplication::translate("DialogWindow", "Close", nullptr));
        label->setText(QCoreApplication::translate("DialogWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWindow: public Ui_DialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWINDOW_H
