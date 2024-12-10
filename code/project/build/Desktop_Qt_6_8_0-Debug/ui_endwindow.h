/********************************************************************************
** Form generated from reading UI file 'endwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW_H
#define UI_ENDWINDOW_H

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

class Ui_EndWindow
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
    QLCDNumber *lcdNumber_ir_odo;
    QLCDNumber *lcdNumber_ir_day;
    QPushButton *button_ir_end;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QListWidget *listWidget_ir_crew;
    QLabel *label_13;
    QTextBrowser *textBrowser_ir;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EndWindow)
    {
        if (EndWindow->objectName().isEmpty())
            EndWindow->setObjectName("EndWindow");
        EndWindow->resize(897, 596);
        centralwidget = new QWidget(EndWindow);
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
        indicatorNovosibirsk_3->setCheckable(false);
        indicatorNovosibirsk_3->setChecked(false);
        indicatorEnd_3 = new QRadioButton(map_frame_3);
        indicatorEnd_3->setObjectName("indicatorEnd_3");
        indicatorEnd_3->setGeometry(QRect(430, 190, 16, 16));
        indicatorEnd_3->setCheckable(true);
        indicatorEnd_3->setChecked(true);
        frame_9 = new QFrame(tab_vol_1);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(9, 10, 161, 511));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumber_ir_odo = new QLCDNumber(frame_9);
        lcdNumber_ir_odo->setObjectName("lcdNumber_ir_odo");
        lcdNumber_ir_odo->setGeometry(QRect(10, 410, 141, 51));
        lcdNumber_ir_odo->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_ir_odo->setDigitCount(7);
        lcdNumber_ir_odo->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_ir_odo->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_ir_odo->setProperty("value", QVariant(999.000000000000000));
        lcdNumber_ir_day = new QLCDNumber(frame_9);
        lcdNumber_ir_day->setObjectName("lcdNumber_ir_day");
        lcdNumber_ir_day->setGeometry(QRect(10, 330, 141, 51));
        lcdNumber_ir_day->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(230, 97, 0);}"));
        lcdNumber_ir_day->setDigitCount(7);
        lcdNumber_ir_day->setMode(QLCDNumber::Mode::Dec);
        lcdNumber_ir_day->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_ir_day->setProperty("value", QVariant(999.000000000000000));
        button_ir_end = new QPushButton(frame_9);
        button_ir_end->setObjectName("button_ir_end");
        button_ir_end->setGeometry(QRect(10, 470, 141, 25));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 310, 49, 16));
        label_10 = new QLabel(frame_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 390, 61, 16));
        label_11 = new QLabel(frame_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 440, 21, 16));
        listWidget_ir_crew = new QListWidget(frame_9);
        listWidget_ir_crew->setObjectName("listWidget_ir_crew");
        listWidget_ir_crew->setGeometry(QRect(10, 30, 141, 271));
        label_13 = new QLabel(frame_9);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 49, 16));
        textBrowser_ir = new QTextBrowser(tab_vol_1);
        textBrowser_ir->setObjectName("textBrowser_ir");
        textBrowser_ir->setGeometry(QRect(180, 330, 691, 192));
        tabWidget->addTab(tab_vol_1, QString());
        EndWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(EndWindow);
        statusbar->setObjectName("statusbar");
        EndWindow->setStatusBar(statusbar);

        retranslateUi(EndWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EndWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EndWindow)
    {
        EndWindow->setWindowTitle(QCoreApplication::translate("EndWindow", "MainWindow", nullptr));
        label_m_map_3->setText(QString());
        indicatorMoscow_3->setText(QString());
        indicatorVolga_3->setText(QString());
        indicatorCaspian_3->setText(QString());
        indicatorNovosibirsk_3->setText(QString());
        indicatorEnd_3->setText(QString());
        button_ir_end->setText(QCoreApplication::translate("EndWindow", "End", nullptr));
        label_9->setText(QCoreApplication::translate("EndWindow", "Day", nullptr));
        label_10->setText(QCoreApplication::translate("EndWindow", "Odometer", nullptr));
        label_11->setText(QCoreApplication::translate("EndWindow", "KM", nullptr));
        label_13->setText(QCoreApplication::translate("EndWindow", "Crew", nullptr));
        textBrowser_ir->setHtml(QCoreApplication::translate("EndWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'IBM Plex Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vol_1), QCoreApplication::translate("EndWindow", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndWindow: public Ui_EndWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW_H
