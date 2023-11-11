/********************************************************************************
** Form generated from reading UI file 'showbus.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWBUS_H
#define UI_SHOWBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShowBus
{
public:
    QListWidget *ShowBusWidget;
    QPushButton *Back_PB;

    void setupUi(QDialog *ShowBus)
    {
        if (ShowBus->objectName().isEmpty())
            ShowBus->setObjectName("ShowBus");
        ShowBus->resize(400, 300);
        ShowBusWidget = new QListWidget(ShowBus);
        ShowBusWidget->setObjectName("ShowBusWidget");
        ShowBusWidget->setGeometry(QRect(80, 60, 256, 192));
        Back_PB = new QPushButton(ShowBus);
        Back_PB->setObjectName("Back_PB");
        Back_PB->setGeometry(QRect(90, 220, 75, 24));

        retranslateUi(ShowBus);

        QMetaObject::connectSlotsByName(ShowBus);
    } // setupUi

    void retranslateUi(QDialog *ShowBus)
    {
        ShowBus->setWindowTitle(QCoreApplication::translate("ShowBus", "Dialog", nullptr));
        Back_PB->setText(QCoreApplication::translate("ShowBus", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowBus: public Ui_ShowBus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBUS_H
