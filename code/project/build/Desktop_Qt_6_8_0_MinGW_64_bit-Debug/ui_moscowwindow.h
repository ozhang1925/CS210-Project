/********************************************************************************
** Form generated from reading UI file 'moscowwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSCOWWINDOW_H
#define UI_MOSCOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moscowWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_map;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *moscowWindow)
    {
        if (moscowWindow->objectName().isEmpty())
            moscowWindow->setObjectName("moscowWindow");
        moscowWindow->resize(800, 600);
        centralwidget = new QWidget(moscowWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(220, 10, 561, 541));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_map = new QLabel(frame);
        label_map->setObjectName("label_map");
        label_map->setGeometry(QRect(10, 10, 541, 521));
        moscowWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(moscowWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        moscowWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(moscowWindow);
        statusbar->setObjectName("statusbar");
        moscowWindow->setStatusBar(statusbar);

        retranslateUi(moscowWindow);

        QMetaObject::connectSlotsByName(moscowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *moscowWindow)
    {
        moscowWindow->setWindowTitle(QCoreApplication::translate("moscowWindow", "MainWindow", nullptr));
        label_map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class moscowWindow: public Ui_moscowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSCOWWINDOW_H
