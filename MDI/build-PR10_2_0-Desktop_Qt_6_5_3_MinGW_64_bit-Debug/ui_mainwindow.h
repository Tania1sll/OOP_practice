/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *CreateCar_PB;
    QPushButton *PB_ShowCar;
    QPushButton *PB_CreateBus;
    QPushButton *PB_ShowBus;
    QPushButton *PB_Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(402, 296);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        CreateCar_PB = new QPushButton(centralwidget);
        CreateCar_PB->setObjectName("CreateCar_PB");

        verticalLayout->addWidget(CreateCar_PB);

        PB_ShowCar = new QPushButton(centralwidget);
        PB_ShowCar->setObjectName("PB_ShowCar");

        verticalLayout->addWidget(PB_ShowCar);

        PB_CreateBus = new QPushButton(centralwidget);
        PB_CreateBus->setObjectName("PB_CreateBus");

        verticalLayout->addWidget(PB_CreateBus);

        PB_ShowBus = new QPushButton(centralwidget);
        PB_ShowBus->setObjectName("PB_ShowBus");

        verticalLayout->addWidget(PB_ShowBus);

        PB_Exit = new QPushButton(centralwidget);
        PB_Exit->setObjectName("PB_Exit");

        verticalLayout->addWidget(PB_Exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 402, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CreateCar_PB->setText(QCoreApplication::translate("MainWindow", "Create Car", nullptr));
        PB_ShowCar->setText(QCoreApplication::translate("MainWindow", "Show Car", nullptr));
        PB_CreateBus->setText(QCoreApplication::translate("MainWindow", "Create Bus", nullptr));
        PB_ShowBus->setText(QCoreApplication::translate("MainWindow", "Show Bus", nullptr));
        PB_Exit->setText(QCoreApplication::translate("MainWindow", "Exit ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
