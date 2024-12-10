/********************************************************************************
** Form generated from reading UI file 'volgawindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLGAWINDOW_H
#define UI_VOLGAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VolgaWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_vol_1;
    QFrame *map_frame_3;
    QLabel *label_m_map_3;
    QRadioButton *indicatorMoscow_3;
    QRadioButton *indicatorVolga_3;
    QRadioButton *indicatorCaspian_3;
    QRadioButton *indicatorNovosibirsk_3;
    QRadioButton *indicatorEnd_3;
    QFrame *frame_9;
    QLCDNumber *lcdNumber_volga_odo;
    QLCDNumber *lcdNumber_volga_day;
    QPushButton *button_vol_continue;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QListWidget *listWidget_vol_crew;
    QLabel *label_13;
    QTextBrowser *textBrowser_vol;
    QPushButton *button_volga_talk;
    QWidget *tab_vol_2;
    QFrame *frame_10;
    QLCDNumber *lcdNumber_volga_energy;
    QLabel *label_12;
    QTextBrowser *text_volga_sub;
    QFrame *frame_vol_map;
    QLabel *label_map_volga;
    QPushButton *button_volga_church;
    QPushButton *button_volga_crane;
    QPushButton *button_volga_terminal;
    QPushButton *button_volga_radDump;
    QPushButton *button_volga_bridge;
    QPushButton *button_volga_safehouse;
    QPushButton *button_volga_banditTower;
    QPushButton *button_volga_oilTank;
    QPushButton *button_volga_banditCamp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VolgaWindow)
    {
        if (VolgaWindow->objectName().isEmpty())
            VolgaWindow->setObjectName("VolgaWindow");
        VolgaWindow->resize(901, 600);
        centralwidget = new QWidget(VolgaWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 881, 561));
        tab_vol_1 = new QWidget();
        tab_vol_1->setObjectName("tab_vol_1");
        map_frame_3 = new QFrame(tab_vol_1);
        map_frame_3->setObjectName("map_frame_3");
        map_frame_3->setGeometry(QRect(180, 10, 691, 311));
        map_frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        map_frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_m_map_3 = new QLabel(map_frame_3);
        label_m_map_3->setObjectName("label_m_map_3");
        label_m_map_3->setGeometry(QRect(10, 10, 671, 291));
        label_m_map_3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/map.png")));
        indicatorMoscow_3 = new QRadioButton(map_frame_3);
        indicatorMoscow_3->setObjectName("indicatorMoscow_3");
        indicatorMoscow_3->setGeometry(QRect(10, 150, 16, 16));
        indicatorMoscow_3->setCheckable(false);
        indicatorMoscow_3->setChecked(false);
        indicatorVolga_3 = new QRadioButton(map_frame_3);
        indicatorVolga_3->setObjectName("indicatorVolga_3");
        indicatorVolga_3->setGeometry(QRect(10, 190, 16, 16));
        indicatorVolga_3->setCheckable(true);
        indicatorVolga_3->setChecked(true);
        indicatorCaspian_3 = new QRadioButton(map_frame_3);
        indicatorCaspian_3->setObjectName("indicatorCaspian_3");
        indicatorCaspian_3->setGeometry(QRect(120, 230, 16, 16));
        indicatorCaspian_3->setCheckable(false);
        indicatorCaspian_3->setChecked(false);
        indicatorNovosibirsk_3 = new QRadioButton(map_frame_3);
        indicatorNovosibirsk_3->setObjectName("indicatorNovosibirsk_3");
        indicatorNovosibirsk_3->setGeometry(QRect(300, 160, 16, 16));
        indicatorNovosibirsk_3->setCheckable(false);
        indicatorNovosibirsk_3->setChecked(false);
        indicatorEnd_3 = new QRadioButton(map_frame_3);
        indicatorEnd_3->setObjectName("indicatorEnd_3");
        indicatorEnd_3->setGeometry(QRect(430, 190, 16, 16));
        indicatorEnd_3->setCheckable(false);
        indicatorEnd_3->setChecked(false);
        frame_9 = new QFrame(tab_vol_1);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(9, 10, 161, 511));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumber_volga_odo = new QLCDNumber(frame_9);
        lcdNumber_volga_odo->setObjectName("lcdNumber_volga_odo");
        lcdNumber_volga_odo->setGeometry(QRect(10, 410, 141, 51));
        lcdNumber_volga_odo->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_volga_odo->setDigitCount(7);
        lcdNumber_volga_odo->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_volga_odo->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_volga_odo->setProperty("value", QVariant(999.000000000000000));
        lcdNumber_volga_day = new QLCDNumber(frame_9);
        lcdNumber_volga_day->setObjectName("lcdNumber_volga_day");
        lcdNumber_volga_day->setGeometry(QRect(10, 330, 141, 51));
        lcdNumber_volga_day->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_volga_day->setDigitCount(7);
        lcdNumber_volga_day->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_volga_day->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_volga_day->setProperty("value", QVariant(999.000000000000000));
        button_vol_continue = new QPushButton(frame_9);
        button_vol_continue->setObjectName("button_vol_continue");
        button_vol_continue->setGeometry(QRect(10, 470, 141, 25));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 310, 49, 16));
        label_10 = new QLabel(frame_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 390, 61, 16));
        label_11 = new QLabel(frame_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 440, 21, 16));
        listWidget_vol_crew = new QListWidget(frame_9);
        listWidget_vol_crew->setObjectName("listWidget_vol_crew");
        listWidget_vol_crew->setGeometry(QRect(10, 30, 141, 271));
        label_13 = new QLabel(frame_9);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 49, 16));
        textBrowser_vol = new QTextBrowser(tab_vol_1);
        textBrowser_vol->setObjectName("textBrowser_vol");
        textBrowser_vol->setGeometry(QRect(180, 330, 691, 192));
        button_volga_talk = new QPushButton(tab_vol_1);
        button_volga_talk->setObjectName("button_volga_talk");
        button_volga_talk->setGeometry(QRect(760, 490, 101, 25));
        tabWidget->addTab(tab_vol_1, QString());
        tab_vol_2 = new QWidget();
        tab_vol_2->setObjectName("tab_vol_2");
        frame_10 = new QFrame(tab_vol_2);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(10, 10, 341, 511));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumber_volga_energy = new QLCDNumber(frame_10);
        lcdNumber_volga_energy->setObjectName("lcdNumber_volga_energy");
        lcdNumber_volga_energy->setGeometry(QRect(190, 30, 141, 51));
        lcdNumber_volga_energy->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_volga_energy->setDigitCount(7);
        lcdNumber_volga_energy->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_volga_energy->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_volga_energy->setProperty("value", QVariant(999.000000000000000));
        label_12 = new QLabel(frame_10);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 10, 49, 16));
        text_volga_sub = new QTextBrowser(frame_10);
        text_volga_sub->setObjectName("text_volga_sub");
        text_volga_sub->setGeometry(QRect(10, 90, 321, 411));
        frame_vol_map = new QFrame(tab_vol_2);
        frame_vol_map->setObjectName("frame_vol_map");
        frame_vol_map->setGeometry(QRect(360, 10, 511, 511));
        frame_vol_map->setFrameShape(QFrame::Shape::StyledPanel);
        frame_vol_map->setFrameShadow(QFrame::Shadow::Raised);
        label_map_volga = new QLabel(frame_vol_map);
        label_map_volga->setObjectName("label_map_volga");
        label_map_volga->setGeometry(QRect(10, 10, 491, 491));
        label_map_volga->setPixmap(QPixmap(QString::fromUtf8(":/images/images/map_volga.png")));
        button_volga_church = new QPushButton(frame_vol_map);
        button_volga_church->setObjectName("button_volga_church");
        button_volga_church->setGeometry(QRect(170, 170, 21, 24));
        button_volga_crane = new QPushButton(frame_vol_map);
        button_volga_crane->setObjectName("button_volga_crane");
        button_volga_crane->setGeometry(QRect(130, 410, 21, 24));
        button_volga_terminal = new QPushButton(frame_vol_map);
        button_volga_terminal->setObjectName("button_volga_terminal");
        button_volga_terminal->setGeometry(QRect(460, 230, 21, 24));
        button_volga_radDump = new QPushButton(frame_vol_map);
        button_volga_radDump->setObjectName("button_volga_radDump");
        button_volga_radDump->setGeometry(QRect(90, 350, 21, 24));
        button_volga_bridge = new QPushButton(frame_vol_map);
        button_volga_bridge->setObjectName("button_volga_bridge");
        button_volga_bridge->setGeometry(QRect(350, 170, 21, 24));
        button_volga_safehouse = new QPushButton(frame_vol_map);
        button_volga_safehouse->setObjectName("button_volga_safehouse");
        button_volga_safehouse->setGeometry(QRect(280, 280, 21, 24));
        button_volga_banditTower = new QPushButton(frame_vol_map);
        button_volga_banditTower->setObjectName("button_volga_banditTower");
        button_volga_banditTower->setGeometry(QRect(190, 330, 21, 24));
        button_volga_oilTank = new QPushButton(frame_vol_map);
        button_volga_oilTank->setObjectName("button_volga_oilTank");
        button_volga_oilTank->setGeometry(QRect(390, 400, 21, 24));
        button_volga_banditCamp = new QPushButton(frame_vol_map);
        button_volga_banditCamp->setObjectName("button_volga_banditCamp");
        button_volga_banditCamp->setGeometry(QRect(290, 230, 21, 24));
        tabWidget->addTab(tab_vol_2, QString());
        VolgaWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(VolgaWindow);
        statusbar->setObjectName("statusbar");
        VolgaWindow->setStatusBar(statusbar);

        retranslateUi(VolgaWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(VolgaWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VolgaWindow)
    {
        VolgaWindow->setWindowTitle(QCoreApplication::translate("VolgaWindow", "MainWindow", nullptr));
        label_m_map_3->setText(QString());
        indicatorMoscow_3->setText(QString());
        indicatorVolga_3->setText(QString());
        indicatorCaspian_3->setText(QString());
        indicatorNovosibirsk_3->setText(QString());
        indicatorEnd_3->setText(QString());
        button_vol_continue->setText(QCoreApplication::translate("VolgaWindow", "Continue", nullptr));
        label_9->setText(QCoreApplication::translate("VolgaWindow", "Day", nullptr));
        label_10->setText(QCoreApplication::translate("VolgaWindow", "Odometer", nullptr));
        label_11->setText(QCoreApplication::translate("VolgaWindow", "KM", nullptr));
        label_13->setText(QCoreApplication::translate("VolgaWindow", "Crew", nullptr));
        textBrowser_vol->setHtml(QCoreApplication::translate("VolgaWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'IBM Plex Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Volga.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">We hit a barricade on the tracks. The brake system was punctured and we're stuck here until we can get it fixed. A church in the distance has sounded its bells and the drawbridge crossing the river is up. We'll have to check out the church first...</p>\n"
"<p st"
                        "yle=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Map markers:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">!   - Next objective</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">H - safehouse</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">?  - Curiosity</p></body></html>", nullptr));
        button_volga_talk->setText(QCoreApplication::translate("VolgaWindow", "Talk", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_1), QCoreApplication::translate("VolgaWindow", "Tab 1", nullptr));
        label_12->setText(QCoreApplication::translate("VolgaWindow", "Energy", nullptr));
        label_map_volga->setText(QString());
        button_volga_church->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_crane->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_terminal->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_radDump->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_bridge->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_safehouse->setText(QCoreApplication::translate("VolgaWindow", "H", nullptr));
        button_volga_banditTower->setText(QCoreApplication::translate("VolgaWindow", "?", nullptr));
        button_volga_oilTank->setText(QCoreApplication::translate("VolgaWindow", "?", nullptr));
        button_volga_banditCamp->setText(QCoreApplication::translate("VolgaWindow", "?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_2), QCoreApplication::translate("VolgaWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VolgaWindow: public Ui_VolgaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLGAWINDOW_H
