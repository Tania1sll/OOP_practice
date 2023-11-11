/********************************************************************************
** Form generated from reading UI file 'createbus.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBUS_H
#define UI_CREATEBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateBus
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Price_LN;
    QLineEdit *Invalidity_LN;
    QLineEdit *Year_LN;
    QLineEdit *rNumber_LN;
    QLabel *Places_LB;
    QLineEdit *Id_LN;
    QLabel *Id_LB;
    QLabel *rNumber_LB;
    QLabel *Invalidity_LB;
    QLabel *Price_LB;
    QLineEdit *Places_LN;
    QLabel *Year_LB;
    QPushButton *CreateBus_PB;

    void setupUi(QDialog *CreateBus)
    {
        if (CreateBus->objectName().isEmpty())
            CreateBus->setObjectName("CreateBus");
        CreateBus->resize(400, 300);
        layoutWidget = new QWidget(CreateBus);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 222, 220));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Price_LN = new QLineEdit(layoutWidget);
        Price_LN->setObjectName("Price_LN");

        gridLayout->addWidget(Price_LN, 2, 1, 1, 1);

        Invalidity_LN = new QLineEdit(layoutWidget);
        Invalidity_LN->setObjectName("Invalidity_LN");

        gridLayout->addWidget(Invalidity_LN, 5, 1, 1, 1);

        Year_LN = new QLineEdit(layoutWidget);
        Year_LN->setObjectName("Year_LN");

        gridLayout->addWidget(Year_LN, 1, 1, 1, 1);

        rNumber_LN = new QLineEdit(layoutWidget);
        rNumber_LN->setObjectName("rNumber_LN");

        gridLayout->addWidget(rNumber_LN, 4, 1, 1, 1);

        Places_LB = new QLabel(layoutWidget);
        Places_LB->setObjectName("Places_LB");

        gridLayout->addWidget(Places_LB, 3, 0, 1, 1);

        Id_LN = new QLineEdit(layoutWidget);
        Id_LN->setObjectName("Id_LN");

        gridLayout->addWidget(Id_LN, 0, 1, 1, 1);

        Id_LB = new QLabel(layoutWidget);
        Id_LB->setObjectName("Id_LB");

        gridLayout->addWidget(Id_LB, 0, 0, 1, 1);

        rNumber_LB = new QLabel(layoutWidget);
        rNumber_LB->setObjectName("rNumber_LB");

        gridLayout->addWidget(rNumber_LB, 4, 0, 1, 1);

        Invalidity_LB = new QLabel(layoutWidget);
        Invalidity_LB->setObjectName("Invalidity_LB");

        gridLayout->addWidget(Invalidity_LB, 5, 0, 1, 1);

        Price_LB = new QLabel(layoutWidget);
        Price_LB->setObjectName("Price_LB");

        gridLayout->addWidget(Price_LB, 2, 0, 1, 1);

        Places_LN = new QLineEdit(layoutWidget);
        Places_LN->setObjectName("Places_LN");

        gridLayout->addWidget(Places_LN, 3, 1, 1, 1);

        Year_LB = new QLabel(layoutWidget);
        Year_LB->setObjectName("Year_LB");

        gridLayout->addWidget(Year_LB, 1, 0, 1, 1);

        CreateBus_PB = new QPushButton(CreateBus);
        CreateBus_PB->setObjectName("CreateBus_PB");
        CreateBus_PB->setGeometry(QRect(100, 260, 75, 24));

        retranslateUi(CreateBus);

        QMetaObject::connectSlotsByName(CreateBus);
    } // setupUi

    void retranslateUi(QDialog *CreateBus)
    {
        CreateBus->setWindowTitle(QCoreApplication::translate("CreateBus", "Dialog", nullptr));
        Places_LB->setText(QCoreApplication::translate("CreateBus", "Enter places:", nullptr));
        Id_LB->setText(QCoreApplication::translate("CreateBus", "Enter id:", nullptr));
        rNumber_LB->setText(QCoreApplication::translate("CreateBus", "Enter rNumber:", nullptr));
        Invalidity_LB->setText(QCoreApplication::translate("CreateBus", "Enter places invalidity:", nullptr));
        Price_LB->setText(QCoreApplication::translate("CreateBus", "Enter price:", nullptr));
        Year_LB->setText(QCoreApplication::translate("CreateBus", "Enter year:", nullptr));
        CreateBus_PB->setText(QCoreApplication::translate("CreateBus", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBus: public Ui_CreateBus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBUS_H
