/********************************************************************************
** Form generated from reading UI file 'citywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYWINDOW_H
#define UI_CITYWINDOW_H

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

class Ui_CityWindow
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
    QLCDNumber *lcdNumber_dc_odo;
    QLCDNumber *lcdNumber_dc_day;
    QPushButton *button_dc_continue;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QListWidget *listWidget_dc_crew;
    QLabel *label_13;
    QTextBrowser *textBrowser_vol;
    QPushButton *button_dc_talk;
    QWidget *tab_vol_2;
    QFrame *frame_10;
    QLCDNumber *lcdNumber_dc_energy;
    QLabel *label_12;
    QTextBrowser *text_dc_sub;
    QFrame *frame_dc_map;
    QLabel *label_map_volga;
    QPushButton *button_dc_entrance;
    QPushButton *button_dc_above;
    QPushButton *button_dc_under;
    QPushButton *button_dc_institute;
    QPushButton *button_dc_exit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CityWindow)
    {
        if (CityWindow->objectName().isEmpty())
            CityWindow->setObjectName("CityWindow");
        CityWindow->resize(891, 582);
        centralwidget = new QWidget(CityWindow);
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
        indicatorCaspian_3->setCheckable(false);
        indicatorCaspian_3->setChecked(false);
        indicatorNovosibirsk_3 = new QRadioButton(map_frame_3);
        indicatorNovosibirsk_3->setObjectName("indicatorNovosibirsk_3");
        indicatorNovosibirsk_3->setGeometry(QRect(300, 160, 16, 16));
        indicatorNovosibirsk_3->setCheckable(true);
        indicatorNovosibirsk_3->setChecked(true);
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
        lcdNumber_dc_odo = new QLCDNumber(frame_9);
        lcdNumber_dc_odo->setObjectName("lcdNumber_dc_odo");
        lcdNumber_dc_odo->setGeometry(QRect(10, 410, 141, 51));
        lcdNumber_dc_odo->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_dc_odo->setDigitCount(7);
        lcdNumber_dc_odo->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_dc_odo->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_dc_odo->setProperty("value", QVariant(999.000000000000000));
        lcdNumber_dc_day = new QLCDNumber(frame_9);
        lcdNumber_dc_day->setObjectName("lcdNumber_dc_day");
        lcdNumber_dc_day->setGeometry(QRect(10, 330, 141, 51));
        lcdNumber_dc_day->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_dc_day->setDigitCount(7);
        lcdNumber_dc_day->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_dc_day->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_dc_day->setProperty("value", QVariant(999.000000000000000));
        button_dc_continue = new QPushButton(frame_9);
        button_dc_continue->setObjectName("button_dc_continue");
        button_dc_continue->setGeometry(QRect(10, 470, 141, 25));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 310, 49, 16));
        label_10 = new QLabel(frame_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 390, 61, 16));
        label_11 = new QLabel(frame_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 440, 21, 16));
        listWidget_dc_crew = new QListWidget(frame_9);
        listWidget_dc_crew->setObjectName("listWidget_dc_crew");
        listWidget_dc_crew->setGeometry(QRect(10, 30, 141, 271));
        label_13 = new QLabel(frame_9);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 49, 16));
        textBrowser_vol = new QTextBrowser(tab_vol_1);
        textBrowser_vol->setObjectName("textBrowser_vol");
        textBrowser_vol->setGeometry(QRect(180, 330, 691, 192));
        button_dc_talk = new QPushButton(tab_vol_1);
        button_dc_talk->setObjectName("button_dc_talk");
        button_dc_talk->setGeometry(QRect(760, 490, 101, 25));
        tabWidget->addTab(tab_vol_1, QString());
        tab_vol_2 = new QWidget();
        tab_vol_2->setObjectName("tab_vol_2");
        frame_10 = new QFrame(tab_vol_2);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(10, 10, 341, 511));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumber_dc_energy = new QLCDNumber(frame_10);
        lcdNumber_dc_energy->setObjectName("lcdNumber_dc_energy");
        lcdNumber_dc_energy->setGeometry(QRect(190, 30, 141, 51));
        lcdNumber_dc_energy->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_dc_energy->setDigitCount(7);
        lcdNumber_dc_energy->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_dc_energy->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_dc_energy->setProperty("value", QVariant(999.000000000000000));
        label_12 = new QLabel(frame_10);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 10, 49, 16));
        text_dc_sub = new QTextBrowser(frame_10);
        text_dc_sub->setObjectName("text_dc_sub");
        text_dc_sub->setGeometry(QRect(10, 90, 321, 411));
        frame_dc_map = new QFrame(tab_vol_2);
        frame_dc_map->setObjectName("frame_dc_map");
        frame_dc_map->setGeometry(QRect(360, 10, 511, 511));
        frame_dc_map->setFrameShape(QFrame::Shape::StyledPanel);
        frame_dc_map->setFrameShadow(QFrame::Shadow::Raised);
        label_map_volga = new QLabel(frame_dc_map);
        label_map_volga->setObjectName("label_map_volga");
        label_map_volga->setGeometry(QRect(10, 10, 491, 491));
        label_map_volga->setPixmap(QPixmap(QString::fromUtf8(":/images/images/citymap.png")));
        label_map_volga->setScaledContents(true);
        button_dc_entrance = new QPushButton(frame_dc_map);
        button_dc_entrance->setObjectName("button_dc_entrance");
        button_dc_entrance->setGeometry(QRect(100, 110, 21, 25));
        button_dc_above = new QPushButton(frame_dc_map);
        button_dc_above->setObjectName("button_dc_above");
        button_dc_above->setGeometry(QRect(360, 230, 21, 25));
        button_dc_under = new QPushButton(frame_dc_map);
        button_dc_under->setObjectName("button_dc_under");
        button_dc_under->setGeometry(QRect(140, 150, 21, 25));
        button_dc_institute = new QPushButton(frame_dc_map);
        button_dc_institute->setObjectName("button_dc_institute");
        button_dc_institute->setGeometry(QRect(320, 180, 21, 25));
        button_dc_exit = new QPushButton(frame_dc_map);
        button_dc_exit->setObjectName("button_dc_exit");
        button_dc_exit->setGeometry(QRect(440, 350, 21, 25));
        tabWidget->addTab(tab_vol_2, QString());
        CityWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CityWindow);
        statusbar->setObjectName("statusbar");
        CityWindow->setStatusBar(statusbar);

        retranslateUi(CityWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CityWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CityWindow)
    {
        CityWindow->setWindowTitle(QCoreApplication::translate("CityWindow", "MainWindow", nullptr));
        label_m_map_3->setText(QString());
        indicatorMoscow_3->setText(QString());
        indicatorVolga_3->setText(QString());
        indicatorCaspian_3->setText(QString());
        indicatorNovosibirsk_3->setText(QString());
        indicatorEnd_3->setText(QString());
        button_dc_continue->setText(QCoreApplication::translate("CityWindow", "Continue", nullptr));
        label_9->setText(QCoreApplication::translate("CityWindow", "Day", nullptr));
        label_10->setText(QCoreApplication::translate("CityWindow", "Odometer", nullptr));
        label_11->setText(QCoreApplication::translate("CityWindow", "KM", nullptr));
        label_13->setText(QCoreApplication::translate("CityWindow", "Crew", nullptr));
        textBrowser_vol->setHtml(QCoreApplication::translate("CityWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'IBM Plex Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Novosibirsk.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Anna's cough is getting worse. From the data we've gathered from the Caspian satellite station, we've located a medical facility in the city of Novosibirsk. There should be some sort of cure here, but it looks like this place was hit worse than Moscow...</"
                        "p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Map markers:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">!   - Next objective</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">H - safehouse</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">?  - Curiosity</p></body></html>", nullptr));
        button_dc_talk->setText(QCoreApplication::translate("CityWindow", "Talk", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_1), QCoreApplication::translate("CityWindow", "Tab 1", nullptr));
        label_12->setText(QCoreApplication::translate("CityWindow", "Energy", nullptr));
        label_map_volga->setText(QString());
        button_dc_entrance->setText(QCoreApplication::translate("CityWindow", "!", nullptr));
        button_dc_above->setText(QCoreApplication::translate("CityWindow", "!", nullptr));
        button_dc_under->setText(QCoreApplication::translate("CityWindow", "!", nullptr));
        button_dc_institute->setText(QCoreApplication::translate("CityWindow", "!", nullptr));
        button_dc_exit->setText(QCoreApplication::translate("CityWindow", "!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_2), QCoreApplication::translate("CityWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CityWindow: public Ui_CityWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYWINDOW_H
