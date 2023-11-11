#include "showcar.h"
#include "ui_showcar.h"

ShowCar::ShowCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowCar)
{
    ui->setupUi(this);
}

ShowCar::~ShowCar()
{
    delete ui;
}
void ShowCar::updateList(QList<Car*> cars)
{
    ui->ShowCarWidget->clear();
    for (int x = 0; x < cars.size(); x++) {
        ui->ShowCarWidget->addItem("Id: "+QString::number(cars[x]->getId())),
        ui->ShowCarWidget->addItem("Year: "+QString::number(cars[x]->getYear())),
        ui->ShowCarWidget->addItem("Price: "+QString::number(cars[x]->getPrice())),
        ui->ShowCarWidget->addItem("Places: "+QString::number(cars[x]->getPlaces())),
        ui->ShowCarWidget->addItem("rNumber: "+QString::number(cars[x]->getRNumber())),
        ui->ShowCarWidget->addItem("Door: "+QString::number(cars[x]->getDoor())),
        ui->ShowCarWidget->addItem("Model: "+QString::fromStdString(cars[x]->getModel())),
        ui->ShowCarWidget->addItem("VinCode: "+QString::fromStdString(cars[x]->getVinCode()));

    }
}

void ShowCar::on_BackCar_PB_clicked()
{
    this->hide();
}

