#include "showbus.h"
#include "ui_showbus.h"

ShowBus::ShowBus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowBus)
{
    ui->setupUi(this);
}

ShowBus::~ShowBus()
{
    delete ui;
}
void ShowBus::updateList(QList<Bus*> buses)
{
    ui->ShowBusWidget->clear();
    for (int x = 0; x < buses.size(); x++) {
        ui->ShowBusWidget->addItem("Id: "+QString::number(buses[x]->getId())),
            ui->ShowBusWidget->addItem("Year: "+QString::number(buses[x]->getYear())),
            ui->ShowBusWidget->addItem("Price: "+QString::number(buses[x]->getPrice())),
            ui->ShowBusWidget->addItem("Places: "+QString::number(buses[x]->getPlaces())),
            ui->ShowBusWidget->addItem("rNumber: "+QString::number(buses[x]->getRNumber())),
            ui->ShowBusWidget->addItem("Places Invalidity: "+QString::fromStdString(buses[x]->getPlacesInvalidity()));

    }
}

void ShowBus::on_Back_PB_clicked()
{
    this->hide();
}

