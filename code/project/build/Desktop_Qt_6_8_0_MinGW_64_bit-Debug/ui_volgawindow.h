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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
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
    QWidget *tab_5;
    QFrame *map_frame_3;
    QLabel *label_m_map_3;
    QRadioButton *indicatorMoscow_3;
    QRadioButton *indicatorVolga_3;
    QRadioButton *indicatorYamantau_3;
    QRadioButton *indicatorCaspian_3;
    QRadioButton *indicatorNovosibirsk_3;
    QRadioButton *indicatorTaiga_3;
    QRadioButton *indicatorEnd_3;
    QFrame *frame_9;
    QLCDNumber *lcdNumber_volga_odo;
    QLCDNumber *lcdNumber_volga_day;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *tab_6;
    QFrame *frame_10;
    QLCDNumber *lcdNumber_volga_energy;
    QLabel *label_12;
    QPushButton *button_info_3;
    QTextBrowser *text_volga_sub;
    QFrame *frame_12;
    QLabel *label_map_volga;
    QPushButton *button_volga_church;
    QPushButton *button_volga_crane;
    QPushButton *button_volga_terminal;
    QPushButton *button_volga_radDump;
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
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        map_frame_3 = new QFrame(tab_5);
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
        indicatorYamantau_3 = new QRadioButton(map_frame_3);
        indicatorYamantau_3->setObjectName("indicatorYamantau_3");
        indicatorYamantau_3->setGeometry(QRect(90, 170, 16, 16));
        indicatorYamantau_3->setCheckable(false);
        indicatorYamantau_3->setChecked(false);
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
        indicatorTaiga_3 = new QRadioButton(map_frame_3);
        indicatorTaiga_3->setObjectName("indicatorTaiga_3");
        indicatorTaiga_3->setGeometry(QRect(200, 180, 16, 16));
        indicatorTaiga_3->setCheckable(false);
        indicatorTaiga_3->setChecked(false);
        indicatorEnd_3 = new QRadioButton(map_frame_3);
        indicatorEnd_3->setObjectName("indicatorEnd_3");
        indicatorEnd_3->setGeometry(QRect(430, 190, 16, 16));
        indicatorEnd_3->setCheckable(false);
        indicatorEnd_3->setChecked(false);
        frame_9 = new QFrame(tab_5);
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
        pushButton_3 = new QPushButton(frame_9);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 470, 141, 25));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 310, 49, 16));
        label_10 = new QLabel(frame_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 390, 61, 16));
        label_11 = new QLabel(frame_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 440, 21, 16));
        scrollArea_3 = new QScrollArea(tab_5);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setGeometry(QRect(180, 330, 691, 191));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 689, 189));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        frame_10 = new QFrame(tab_6);
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
        button_info_3 = new QPushButton(frame_10);
        button_info_3->setObjectName("button_info_3");
        button_info_3->setGeometry(QRect(10, 10, 141, 24));
        text_volga_sub = new QTextBrowser(frame_10);
        text_volga_sub->setObjectName("text_volga_sub");
        text_volga_sub->setGeometry(QRect(10, 90, 321, 411));
        frame_12 = new QFrame(tab_6);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(360, 10, 511, 511));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        label_map_volga = new QLabel(frame_12);
        label_map_volga->setObjectName("label_map_volga");
        label_map_volga->setGeometry(QRect(10, 10, 491, 491));
        label_map_volga->setPixmap(QPixmap(QString::fromUtf8(":/images/images/map_volga.png")));
        button_volga_church = new QPushButton(frame_12);
        button_volga_church->setObjectName("button_volga_church");
        button_volga_church->setGeometry(QRect(170, 170, 21, 24));
        button_volga_crane = new QPushButton(frame_12);
        button_volga_crane->setObjectName("button_volga_crane");
        button_volga_crane->setGeometry(QRect(130, 410, 21, 24));
        button_volga_terminal = new QPushButton(frame_12);
        button_volga_terminal->setObjectName("button_volga_terminal");
        button_volga_terminal->setGeometry(QRect(460, 230, 21, 24));
        button_volga_radDump = new QPushButton(frame_12);
        button_volga_radDump->setObjectName("button_volga_radDump");
        button_volga_radDump->setGeometry(QRect(90, 350, 21, 24));
        tabWidget->addTab(tab_6, QString());
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
        indicatorYamantau_3->setText(QString());
        indicatorCaspian_3->setText(QString());
        indicatorNovosibirsk_3->setText(QString());
        indicatorTaiga_3->setText(QString());
        indicatorEnd_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("VolgaWindow", "Continue", nullptr));
        label_9->setText(QCoreApplication::translate("VolgaWindow", "Day", nullptr));
        label_10->setText(QCoreApplication::translate("VolgaWindow", "Odometer", nullptr));
        label_11->setText(QCoreApplication::translate("VolgaWindow", "KM", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("VolgaWindow", "Tab 1", nullptr));
        label_12->setText(QCoreApplication::translate("VolgaWindow", "Energy", nullptr));
        button_info_3->setText(QCoreApplication::translate("VolgaWindow", "Information", nullptr));
        label_map_volga->setText(QString());
        button_volga_church->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_crane->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_terminal->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        button_volga_radDump->setText(QCoreApplication::translate("VolgaWindow", "!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("VolgaWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VolgaWindow: public Ui_VolgaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLGAWINDOW_H
