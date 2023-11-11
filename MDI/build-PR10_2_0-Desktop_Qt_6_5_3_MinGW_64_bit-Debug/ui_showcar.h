/********************************************************************************
** Form generated from reading UI file 'showcar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCAR_H
#define UI_SHOWCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShowCar
{
public:
    QListWidget *ShowCarWidget;
    QPushButton *BackCar_PB;

    void setupUi(QDialog *ShowCar)
    {
        if (ShowCar->objectName().isEmpty())
            ShowCar->setObjectName("ShowCar");
        ShowCar->resize(400, 300);
        ShowCarWidget = new QListWidget(ShowCar);
        ShowCarWidget->setObjectName("ShowCarWidget");
        ShowCarWidget->setGeometry(QRect(70, 40, 256, 192));
        BackCar_PB = new QPushButton(ShowCar);
        BackCar_PB->setObjectName("BackCar_PB");
        BackCar_PB->setGeometry(QRect(70, 200, 75, 24));

        retranslateUi(ShowCar);

        QMetaObject::connectSlotsByName(ShowCar);
    } // setupUi

    void retranslateUi(QDialog *ShowCar)
    {
        ShowCar->setWindowTitle(QCoreApplication::translate("ShowCar", "Dialog", nullptr));
        BackCar_PB->setText(QCoreApplication::translate("ShowCar", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowCar: public Ui_ShowCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCAR_H
