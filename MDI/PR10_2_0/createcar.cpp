#include "createcar.h"
#include "ui_createcar.h"
#include "QMessageBox"


CreateCar::CreateCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCar)
{
    ui->setupUi(this);
}

CreateCar::~CreateCar()
{
    delete ui;
}

void CreateCar::on_pushButton_clicked()
{
    if (ui->Id_LN->text() != "" &&
        ui->Year_LN->text() != "" &&
        ui->Price_LN->text() != "" &&
        ui->Places_LN->text() != ""&&
           ui->rNumber_LN->text() != ""&&
           ui->Door_LN->text() != ""&&
           ui->Model_LN->text() != ""&&
           ui->VinCode_LN->text() != "")

    {

       Car *car = new Car(
            ui->Id_LN->text().toInt(),
            ui->Year_LN->text().toInt(),
            ui->Price_LN->text().toInt(),
             ui->Places_LN->text().toInt(),
              ui->rNumber_LN->text().toInt(),
             ui->Door_LN->text().toInt(),
            ui->Model_LN->text().toStdString(),
            ui->VinCode_LN->text().toStdString());
         QMessageBox::information(this, "Created", "Car created");
        emit created(car);
        this->hide();
    }
    else {
        QMessageBox::critical(this, "Error!", "You have not entered all the values!");
    }
}

