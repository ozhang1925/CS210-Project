QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    caspianwindow.cpp \
    citywindow.cpp \
    dialogwindow.cpp \
    endwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    volgawindow.cpp

HEADERS += \
    caspianwindow.h \
    citywindow.h \
    dialogwindow.h \
    endwindow.h \
    levels.h \
    location.h \
    mainwindow.h \
    person.h \
    player.h \
    train.h \
    volgawindow.h

FORMS += \
    caspianwindow.ui \
    citywindow.ui \
    dialogwindow.ui \
    endwindow.ui \
    mainwindow.ui \
    volgawindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
