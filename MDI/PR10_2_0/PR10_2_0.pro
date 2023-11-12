QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BaseBusCar.cpp \
    Bus.cpp \
    Car.cpp \
    createbus.cpp \
    createcar.cpp \
    dbmanager.cpp \
    main.cpp \
    mainwindow.cpp \
    showbus.cpp \
    showcar.cpp \
    sqlitedbmanager.cpp

HEADERS += \
    BaseBusCar.h \
    Bus.h \
    Car.h \
    createbus.h \
    createcar.h \
    dbmanager.h \
    mainwindow.h \
    showbus.h \
    showcar.h \
    sqlitedbmanager.h

FORMS += \
    createbus.ui \
    createcar.ui \
    dbmanager.ui \
    mainwindow.ui \
    showbus.ui \
    showcar.ui \
    sqlitedbmanager.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
