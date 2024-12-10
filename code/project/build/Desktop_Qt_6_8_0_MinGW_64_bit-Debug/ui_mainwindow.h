/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *map_frame;
    QLabel *label_m_map;
    QRadioButton *indicatorMoscow;
    QRadioButton *indicatorVolga;
    QRadioButton *indicatorYamantau;
    QRadioButton *indicatorCaspian;
    QRadioButton *indicatorNovosibirsk;
    QRadioButton *indicatorTaiga;
    QRadioButton *indicatorEnd;
    QFrame *frame;
    QLCDNumber *lcdNumber_mosc_odo;
    QLCDNumber *lcdNumber_mosc_day;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QFrame *frame_2;
    QFrame *frame_4;
    QTextBrowser *textBrowser_sub;
    QLCDNumber *lcdNumber_mosc_energy;
    QLabel *label_4;
    QPushButton *button_info;
    QFrame *frame_3;
    QLabel *label_map;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(888, 594);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 881, 561));
        tab = new QWidget();
        tab->setObjectName("tab");
        map_frame = new QFrame(tab);
        map_frame->setObjectName("map_frame");
        map_frame->setGeometry(QRect(180, 10, 691, 311));
        map_frame->setFrameShape(QFrame::Shape::StyledPanel);
        map_frame->setFrameShadow(QFrame::Shadow::Raised);
        label_m_map = new QLabel(map_frame);
        label_m_map->setObjectName("label_m_map");
        label_m_map->setGeometry(QRect(10, 10, 671, 291));
        label_m_map->setPixmap(QPixmap(QString::fromUtf8("images/map.png")));
        indicatorMoscow = new QRadioButton(map_frame);
        indicatorMoscow->setObjectName("indicatorMoscow");
        indicatorMoscow->setGeometry(QRect(10, 150, 16, 16));
        indicatorMoscow->setCheckable(false);
        indicatorMoscow->setChecked(false);
        indicatorVolga = new QRadioButton(map_frame);
        indicatorVolga->setObjectName("indicatorVolga");
        indicatorVolga->setGeometry(QRect(10, 190, 16, 16));
        indicatorVolga->setCheckable(false);
        indicatorVolga->setChecked(false);
        indicatorYamantau = new QRadioButton(map_frame);
        indicatorYamantau->setObjectName("indicatorYamantau");
        indicatorYamantau->setGeometry(QRect(90, 170, 16, 16));
        indicatorYamantau->setCheckable(false);
        indicatorYamantau->setChecked(false);
        indicatorCaspian = new QRadioButton(map_frame);
        indicatorCaspian->setObjectName("indicatorCaspian");
        indicatorCaspian->setGeometry(QRect(120, 230, 16, 16));
        indicatorCaspian->setCheckable(false);
        indicatorCaspian->setChecked(false);
        indicatorNovosibirsk = new QRadioButton(map_frame);
        indicatorNovosibirsk->setObjectName("indicatorNovosibirsk");
        indicatorNovosibirsk->setGeometry(QRect(300, 160, 16, 16));
        indicatorNovosibirsk->setCheckable(false);
        indicatorNovosibirsk->setChecked(false);
        indicatorTaiga = new QRadioButton(map_frame);
        indicatorTaiga->setObjectName("indicatorTaiga");
        indicatorTaiga->setGeometry(QRect(200, 180, 16, 16));
        indicatorTaiga->setCheckable(false);
        indicatorTaiga->setChecked(false);
        indicatorEnd = new QRadioButton(map_frame);
        indicatorEnd->setObjectName("indicatorEnd");
        indicatorEnd->setGeometry(QRect(430, 190, 16, 16));
        indicatorEnd->setCheckable(false);
        indicatorEnd->setChecked(false);
        frame = new QFrame(tab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(9, 10, 161, 511));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumber_mosc_odo = new QLCDNumber(frame);
        lcdNumber_mosc_odo->setObjectName("lcdNumber_mosc_odo");
        lcdNumber_mosc_odo->setGeometry(QRect(10, 410, 141, 51));
        lcdNumber_mosc_odo->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_mosc_odo->setDigitCount(7);
        lcdNumber_mosc_odo->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_mosc_odo->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_mosc_odo->setProperty("value", QVariant(999.000000000000000));
        lcdNumber_mosc_day = new QLCDNumber(frame);
        lcdNumber_mosc_day->setObjectName("lcdNumber_mosc_day");
        lcdNumber_mosc_day->setGeometry(QRect(10, 330, 141, 51));
        lcdNumber_mosc_day->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_mosc_day->setDigitCount(7);
        lcdNumber_mosc_day->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_mosc_day->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_mosc_day->setProperty("value", QVariant(999.000000000000000));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 470, 141, 25));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 310, 49, 16));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 390, 61, 16));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 440, 21, 16));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(180, 330, 691, 192));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 10, 341, 511));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 89, 321, 411));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        textBrowser_sub = new QTextBrowser(frame_4);
        textBrowser_sub->setObjectName("textBrowser_sub");
        textBrowser_sub->setGeometry(QRect(10, 10, 301, 391));
        lcdNumber_mosc_energy = new QLCDNumber(frame_2);
        lcdNumber_mosc_energy->setObjectName("lcdNumber_mosc_energy");
        lcdNumber_mosc_energy->setGeometry(QRect(190, 30, 141, 51));
        lcdNumber_mosc_energy->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_mosc_energy->setDigitCount(7);
        lcdNumber_mosc_energy->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_mosc_energy->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_mosc_energy->setProperty("value", QVariant(999.000000000000000));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 10, 49, 16));
        button_info = new QPushButton(frame_2);
        button_info->setObjectName("button_info");
        button_info->setGeometry(QRect(10, 10, 141, 24));
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(360, 10, 511, 511));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_map = new QLabel(frame_3);
        label_map->setObjectName("label_map");
        label_map->setGeometry(QRect(10, 10, 491, 491));
        label_map->setPixmap(QPixmap(QString::fromUtf8(":/images/images/map_moscow.png")));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_m_map->setText(QString());
        indicatorMoscow->setText(QString());
        indicatorVolga->setText(QString());
        indicatorYamantau->setText(QString());
        indicatorCaspian->setText(QString());
        indicatorNovosibirsk->setText(QString());
        indicatorTaiga->setText(QString());
        indicatorEnd->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Odometer", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "KM", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Moscow.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Being the capital, it is no wonder that it took quite the beating when the war started. The surface is heavily irradiated and is home to many new creatures; making it unsuitable for human habitation. The current population was able to survive by escaping to the Metro"
                        ", though some radiation is leaking in. Ever since that radio signal indicating that people have survived outside of Moscow, you and your crew are eager to set out in hopes of finding somewhere to live aboveground which is clear of radiation.</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Energy", nullptr));
        button_info->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        label_map->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
