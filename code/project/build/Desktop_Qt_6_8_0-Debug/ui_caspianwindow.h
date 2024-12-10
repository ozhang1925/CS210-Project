/********************************************************************************
** Form generated from reading UI file 'caspianwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASPIANWINDOW_H
#define UI_CASPIANWINDOW_H

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

class Ui_CaspianWindow
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
    QLCDNumber *lcdNumber_cas_odo;
    QLCDNumber *lcdNumber_cas_day;
    QPushButton *button_cas_continue;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QListWidget *listWidget_cas_crew;
    QLabel *label_13;
    QTextBrowser *textBrowser_vol;
    QPushButton *button_cas_talk;
    QWidget *tab_vol_2;
    QFrame *frame_10;
    QLCDNumber *lcdNumber_cas_energy;
    QLabel *label_12;
    QTextBrowser *text_cas_sub;
    QFrame *frame_cas_map;
    QLabel *label_map_volga;
    QPushButton *button_c_village;
    QPushButton *button_c_lighthouse;
    QPushButton *button_c_oil;
    QPushButton *button_c_oasis;
    QPushButton *button_c_safehouse;
    QPushButton *button_c_sniper;
    QPushButton *button_c_jail;
    QPushButton *button_c_ship;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CaspianWindow)
    {
        if (CaspianWindow->objectName().isEmpty())
            CaspianWindow->setObjectName("CaspianWindow");
        CaspianWindow->resize(889, 582);
        centralwidget = new QWidget(CaspianWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 881, 561));
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
        indicatorVolga_3->setCheckable(false);
        indicatorVolga_3->setChecked(false);
        indicatorCaspian_3 = new QRadioButton(map_frame_3);
        indicatorCaspian_3->setObjectName("indicatorCaspian_3");
        indicatorCaspian_3->setGeometry(QRect(120, 230, 16, 16));
        indicatorCaspian_3->setCheckable(true);
        indicatorCaspian_3->setChecked(true);
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
        lcdNumber_cas_odo = new QLCDNumber(frame_9);
        lcdNumber_cas_odo->setObjectName("lcdNumber_cas_odo");
        lcdNumber_cas_odo->setGeometry(QRect(10, 410, 141, 51));
        lcdNumber_cas_odo->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_cas_odo->setDigitCount(7);
        lcdNumber_cas_odo->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_cas_odo->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_cas_odo->setProperty("value", QVariant(999.000000000000000));
        lcdNumber_cas_day = new QLCDNumber(frame_9);
        lcdNumber_cas_day->setObjectName("lcdNumber_cas_day");
        lcdNumber_cas_day->setGeometry(QRect(10, 330, 141, 51));
        lcdNumber_cas_day->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_cas_day->setDigitCount(7);
        lcdNumber_cas_day->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_cas_day->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_cas_day->setProperty("value", QVariant(999.000000000000000));
        button_cas_continue = new QPushButton(frame_9);
        button_cas_continue->setObjectName("button_cas_continue");
        button_cas_continue->setGeometry(QRect(10, 470, 141, 25));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 310, 49, 16));
        label_10 = new QLabel(frame_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 390, 61, 16));
        label_11 = new QLabel(frame_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 440, 21, 16));
        listWidget_cas_crew = new QListWidget(frame_9);
        listWidget_cas_crew->setObjectName("listWidget_cas_crew");
        listWidget_cas_crew->setGeometry(QRect(10, 30, 141, 271));
        label_13 = new QLabel(frame_9);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 49, 16));
        textBrowser_vol = new QTextBrowser(tab_vol_1);
        textBrowser_vol->setObjectName("textBrowser_vol");
        textBrowser_vol->setGeometry(QRect(180, 330, 691, 192));
        button_cas_talk = new QPushButton(tab_vol_1);
        button_cas_talk->setObjectName("button_cas_talk");
        button_cas_talk->setGeometry(QRect(760, 490, 101, 25));
        tabWidget->addTab(tab_vol_1, QString());
        tab_vol_2 = new QWidget();
        tab_vol_2->setObjectName("tab_vol_2");
        frame_10 = new QFrame(tab_vol_2);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(10, 10, 341, 511));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumber_cas_energy = new QLCDNumber(frame_10);
        lcdNumber_cas_energy->setObjectName("lcdNumber_cas_energy");
        lcdNumber_cas_energy->setGeometry(QRect(190, 30, 141, 51));
        lcdNumber_cas_energy->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_cas_energy->setDigitCount(7);
        lcdNumber_cas_energy->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_cas_energy->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_cas_energy->setProperty("value", QVariant(999.000000000000000));
        label_12 = new QLabel(frame_10);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 10, 49, 16));
        text_cas_sub = new QTextBrowser(frame_10);
        text_cas_sub->setObjectName("text_cas_sub");
        text_cas_sub->setGeometry(QRect(10, 90, 321, 411));
        frame_cas_map = new QFrame(tab_vol_2);
        frame_cas_map->setObjectName("frame_cas_map");
        frame_cas_map->setGeometry(QRect(360, 10, 511, 511));
        frame_cas_map->setFrameShape(QFrame::Shape::StyledPanel);
        frame_cas_map->setFrameShadow(QFrame::Shadow::Raised);
        label_map_volga = new QLabel(frame_cas_map);
        label_map_volga->setObjectName("label_map_volga");
        label_map_volga->setGeometry(QRect(10, 10, 491, 491));
        label_map_volga->setPixmap(QPixmap(QString::fromUtf8(":/images/images/map_caspian.png")));
        label_map_volga->setScaledContents(true);
        button_c_village = new QPushButton(frame_cas_map);
        button_c_village->setObjectName("button_c_village");
        button_c_village->setGeometry(QRect(90, 390, 21, 25));
        button_c_lighthouse = new QPushButton(frame_cas_map);
        button_c_lighthouse->setObjectName("button_c_lighthouse");
        button_c_lighthouse->setGeometry(QRect(170, 160, 21, 25));
        button_c_oil = new QPushButton(frame_cas_map);
        button_c_oil->setObjectName("button_c_oil");
        button_c_oil->setGeometry(QRect(420, 250, 21, 25));
        button_c_oasis = new QPushButton(frame_cas_map);
        button_c_oasis->setObjectName("button_c_oasis");
        button_c_oasis->setGeometry(QRect(130, 70, 21, 25));
        button_c_safehouse = new QPushButton(frame_cas_map);
        button_c_safehouse->setObjectName("button_c_safehouse");
        button_c_safehouse->setGeometry(QRect(140, 200, 21, 25));
        button_c_sniper = new QPushButton(frame_cas_map);
        button_c_sniper->setObjectName("button_c_sniper");
        button_c_sniper->setGeometry(QRect(250, 330, 21, 25));
        button_c_jail = new QPushButton(frame_cas_map);
        button_c_jail->setObjectName("button_c_jail");
        button_c_jail->setGeometry(QRect(310, 310, 21, 25));
        button_c_ship = new QPushButton(frame_cas_map);
        button_c_ship->setObjectName("button_c_ship");
        button_c_ship->setGeometry(QRect(90, 250, 21, 25));
        tabWidget->addTab(tab_vol_2, QString());
        CaspianWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CaspianWindow);
        statusbar->setObjectName("statusbar");
        CaspianWindow->setStatusBar(statusbar);

        retranslateUi(CaspianWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CaspianWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CaspianWindow)
    {
        CaspianWindow->setWindowTitle(QCoreApplication::translate("CaspianWindow", "MainWindow", nullptr));
        label_m_map_3->setText(QString());
        indicatorMoscow_3->setText(QString());
        indicatorVolga_3->setText(QString());
        indicatorCaspian_3->setText(QString());
        indicatorNovosibirsk_3->setText(QString());
        indicatorEnd_3->setText(QString());
        button_cas_continue->setText(QCoreApplication::translate("CaspianWindow", "Continue", nullptr));
        label_9->setText(QCoreApplication::translate("CaspianWindow", "Day", nullptr));
        label_10->setText(QCoreApplication::translate("CaspianWindow", "Odometer", nullptr));
        label_11->setText(QCoreApplication::translate("CaspianWindow", "KM", nullptr));
        label_13->setText(QCoreApplication::translate("CaspianWindow", "Crew", nullptr));
        textBrowser_vol->setHtml(QCoreApplication::translate("CaspianWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'IBM Plex Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Caspian.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">We spotted a car along the tracks. It took off as soon as it saw us, which wasn't very confidence inspiring. Miller said there was a satellite station here, which could have maps denoting places with lower radiation levels. However, this desert has gotten ever"
                        "yone on edge and we're running out of coal and water. Anyhow, I'll see where that car went as a start...</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Map markers:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">!   - Next objective</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">H - safehouse</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">?  - Curiosity</p></body></html>", nullptr));
        button_cas_talk->setText(QCoreApplication::translate("CaspianWindow", "Talk", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_1), QCoreApplication::translate("CaspianWindow", "Tab 1", nullptr));
        label_12->setText(QCoreApplication::translate("CaspianWindow", "Energy", nullptr));
        label_map_volga->setText(QString());
        button_c_village->setText(QCoreApplication::translate("CaspianWindow", "!", nullptr));
        button_c_lighthouse->setText(QCoreApplication::translate("CaspianWindow", "!", nullptr));
        button_c_oil->setText(QCoreApplication::translate("CaspianWindow", "!", nullptr));
        button_c_oasis->setText(QCoreApplication::translate("CaspianWindow", "!", nullptr));
        button_c_safehouse->setText(QCoreApplication::translate("CaspianWindow", "H", nullptr));
        button_c_sniper->setText(QCoreApplication::translate("CaspianWindow", "?", nullptr));
        button_c_jail->setText(QCoreApplication::translate("CaspianWindow", "?", nullptr));
        button_c_ship->setText(QCoreApplication::translate("CaspianWindow", "?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_2), QCoreApplication::translate("CaspianWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaspianWindow: public Ui_CaspianWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASPIANWINDOW_H
