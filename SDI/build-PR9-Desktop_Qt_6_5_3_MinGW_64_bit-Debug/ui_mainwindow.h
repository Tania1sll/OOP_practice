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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionShow;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_year;
    QLineEdit *lineEdit_places;
    QLineEdit *lineEdit_rNumber;
    QLineEdit *lineEdit_model;
    QLineEdit *lineEdit_vinCode;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdin_door;
    QLabel *label_year;
    QLabel *label_price;
    QLabel *label_places;
    QLabel *label_rNumber;
    QLabel *label_door;
    QLabel *label_model;
    QLabel *label_vinCode;
    QLabel *label_id;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_add;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName("actionCreate");
        actionShow = new QAction(MainWindow);
        actionShow->setObjectName("actionShow");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 216, 268));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        lineEdit_id = new QLineEdit(verticalLayoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_id);

        lineEdit_year = new QLineEdit(verticalLayoutWidget);
        lineEdit_year->setObjectName("lineEdit_year");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_year);

        lineEdit_places = new QLineEdit(verticalLayoutWidget);
        lineEdit_places->setObjectName("lineEdit_places");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_places);

        lineEdit_rNumber = new QLineEdit(verticalLayoutWidget);
        lineEdit_rNumber->setObjectName("lineEdit_rNumber");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_rNumber);

        lineEdit_model = new QLineEdit(verticalLayoutWidget);
        lineEdit_model->setObjectName("lineEdit_model");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_model);

        lineEdit_vinCode = new QLineEdit(verticalLayoutWidget);
        lineEdit_vinCode->setObjectName("lineEdit_vinCode");

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_vinCode);

        lineEdit_price = new QLineEdit(verticalLayoutWidget);
        lineEdit_price->setObjectName("lineEdit_price");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_price);

        lineEdin_door = new QLineEdit(verticalLayoutWidget);
        lineEdin_door->setObjectName("lineEdin_door");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdin_door);

        label_year = new QLabel(verticalLayoutWidget);
        label_year->setObjectName("label_year");
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(12);
        label_year->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_year);

        label_price = new QLabel(verticalLayoutWidget);
        label_price->setObjectName("label_price");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_price->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_price);

        label_places = new QLabel(verticalLayoutWidget);
        label_places->setObjectName("label_places");
        label_places->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_places);

        label_rNumber = new QLabel(verticalLayoutWidget);
        label_rNumber->setObjectName("label_rNumber");
        label_rNumber->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_rNumber);

        label_door = new QLabel(verticalLayoutWidget);
        label_door->setObjectName("label_door");
        label_door->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_door);

        label_model = new QLabel(verticalLayoutWidget);
        label_model->setObjectName("label_model");
        label_model->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_model);

        label_vinCode = new QLabel(verticalLayoutWidget);
        label_vinCode->setObjectName("label_vinCode");
        label_vinCode->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_vinCode);

        label_id = new QLabel(verticalLayoutWidget);
        label_id->setObjectName("label_id");
        label_id->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_id);


        verticalLayout->addLayout(formLayout);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 280, 211, 31));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_add = new QPushButton(verticalLayoutWidget_2);
        pushButton_add->setObjectName("pushButton_add");

        verticalLayout_2->addWidget(pushButton_add);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionCreate);
        menuMenu->addAction(actionShow);
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate->setText(QCoreApplication::translate("MainWindow", "Create ", nullptr));
        actionShow->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_year->setText(QCoreApplication::translate("MainWindow", "year", nullptr));
        label_price->setText(QCoreApplication::translate("MainWindow", "price", nullptr));
        label_places->setText(QCoreApplication::translate("MainWindow", "places", nullptr));
        label_rNumber->setText(QCoreApplication::translate("MainWindow", "rNumber", nullptr));
        label_door->setText(QCoreApplication::translate("MainWindow", "door", nullptr));
        label_model->setText(QCoreApplication::translate("MainWindow", "model", nullptr));
        label_vinCode->setText(QCoreApplication::translate("MainWindow", "vinCode", nullptr));
        label_id->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "Add car", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
