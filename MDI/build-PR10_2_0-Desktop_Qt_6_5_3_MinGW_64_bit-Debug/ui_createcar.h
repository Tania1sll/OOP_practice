/********************************************************************************
** Form generated from reading UI file 'createcar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECAR_H
#define UI_CREATECAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateCar
{
public:
    QFormLayout *formLayout_2;
    QGridLayout *gridLayout;
    QLabel *Id_LB;
    QLineEdit *Id_LN;
    QLabel *Year_LB;
    QLineEdit *Year_LN;
    QLabel *Price_LB;
    QLineEdit *Price_LN;
    QLabel *Places_LB;
    QLineEdit *Places_LN;
    QLabel *rNumber_LB;
    QLineEdit *rNumber_LN;
    QLabel *Door_LB;
    QLineEdit *Door_LN;
    QLabel *Model_LB;
    QLineEdit *Model_LN;
    QLabel *VinCode_LB;
    QLineEdit *VinCode_LN;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateCar)
    {
        if (CreateCar->objectName().isEmpty())
            CreateCar->setObjectName("CreateCar");
        CreateCar->resize(264, 353);
        formLayout_2 = new QFormLayout(CreateCar);
        formLayout_2->setObjectName("formLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Id_LB = new QLabel(CreateCar);
        Id_LB->setObjectName("Id_LB");

        gridLayout->addWidget(Id_LB, 0, 0, 1, 1);

        Id_LN = new QLineEdit(CreateCar);
        Id_LN->setObjectName("Id_LN");

        gridLayout->addWidget(Id_LN, 0, 1, 1, 1);

        Year_LB = new QLabel(CreateCar);
        Year_LB->setObjectName("Year_LB");

        gridLayout->addWidget(Year_LB, 1, 0, 1, 1);

        Year_LN = new QLineEdit(CreateCar);
        Year_LN->setObjectName("Year_LN");

        gridLayout->addWidget(Year_LN, 1, 1, 1, 1);

        Price_LB = new QLabel(CreateCar);
        Price_LB->setObjectName("Price_LB");

        gridLayout->addWidget(Price_LB, 2, 0, 1, 1);

        Price_LN = new QLineEdit(CreateCar);
        Price_LN->setObjectName("Price_LN");

        gridLayout->addWidget(Price_LN, 2, 1, 1, 1);

        Places_LB = new QLabel(CreateCar);
        Places_LB->setObjectName("Places_LB");

        gridLayout->addWidget(Places_LB, 3, 0, 1, 1);

        Places_LN = new QLineEdit(CreateCar);
        Places_LN->setObjectName("Places_LN");

        gridLayout->addWidget(Places_LN, 3, 1, 1, 1);

        rNumber_LB = new QLabel(CreateCar);
        rNumber_LB->setObjectName("rNumber_LB");

        gridLayout->addWidget(rNumber_LB, 4, 0, 1, 1);

        rNumber_LN = new QLineEdit(CreateCar);
        rNumber_LN->setObjectName("rNumber_LN");

        gridLayout->addWidget(rNumber_LN, 4, 1, 1, 1);

        Door_LB = new QLabel(CreateCar);
        Door_LB->setObjectName("Door_LB");

        gridLayout->addWidget(Door_LB, 5, 0, 1, 1);

        Door_LN = new QLineEdit(CreateCar);
        Door_LN->setObjectName("Door_LN");

        gridLayout->addWidget(Door_LN, 5, 1, 1, 1);

        Model_LB = new QLabel(CreateCar);
        Model_LB->setObjectName("Model_LB");

        gridLayout->addWidget(Model_LB, 6, 0, 1, 1);

        Model_LN = new QLineEdit(CreateCar);
        Model_LN->setObjectName("Model_LN");

        gridLayout->addWidget(Model_LN, 6, 1, 1, 1);

        VinCode_LB = new QLabel(CreateCar);
        VinCode_LB->setObjectName("VinCode_LB");

        gridLayout->addWidget(VinCode_LB, 7, 0, 1, 1);

        VinCode_LN = new QLineEdit(CreateCar);
        VinCode_LN->setObjectName("VinCode_LN");

        gridLayout->addWidget(VinCode_LN, 7, 1, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, gridLayout);

        pushButton = new QPushButton(CreateCar);
        pushButton->setObjectName("pushButton");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton);


        retranslateUi(CreateCar);

        QMetaObject::connectSlotsByName(CreateCar);
    } // setupUi

    void retranslateUi(QDialog *CreateCar)
    {
        CreateCar->setWindowTitle(QCoreApplication::translate("CreateCar", "Dialog", nullptr));
        Id_LB->setText(QCoreApplication::translate("CreateCar", "Enter id:", nullptr));
        Year_LB->setText(QCoreApplication::translate("CreateCar", "Enter year:", nullptr));
        Price_LB->setText(QCoreApplication::translate("CreateCar", "Enter price:", nullptr));
        Places_LB->setText(QCoreApplication::translate("CreateCar", "Enter places:", nullptr));
        rNumber_LB->setText(QCoreApplication::translate("CreateCar", "Enter rNumber:", nullptr));
        Door_LB->setText(QCoreApplication::translate("CreateCar", "Enter door:", nullptr));
        Model_LB->setText(QCoreApplication::translate("CreateCar", "Enter model:", nullptr));
        VinCode_LB->setText(QCoreApplication::translate("CreateCar", "Enter vinCode:", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateCar", "Create ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateCar: public Ui_CreateCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECAR_H
