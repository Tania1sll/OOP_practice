#include "showbus.h"
#include "ui_showbus.h"
#include "Bus.h"
#include <QSqlTableModel>
#include "sqlitedbmanager.h"

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
void ShowBus::updateList(SQliteDBManager* sQliteDBManager)
{
//    ui->ShowBusWidget->clear();
//    for (int x = 0; x < buses.size(); x++) {
//        ui->ShowBusWidget->addItem("Id: "+QString::number(buses[x]->getId())),
//            ui->ShowBusWidget->addItem("Year: "+QString::number(buses[x]->getYear())),
//            ui->ShowBusWidget->addItem("Price: "+QString::number(buses[x]->getPrice())),
//            ui->ShowBusWidget->addItem("Places: "+QString::number(buses[x]->getPlaces())),
//            ui->ShowBusWidget->addItem("rNumber: "+QString::number(buses[x]->getRNumber())),
//            ui->ShowBusWidget->addItem("Places Invalidity: "+QString::fromStdString(buses[x]->getPlacesInvalidity()));

//    }

    QSqlTableModel *qSqlTableModel =  new QSqlTableModel(this, sQliteDBManager->getDB());
    qSqlTableModel->setTable(sQliteDBManager->BUS_NAME_TABLE);
    qSqlTableModel->select();
    ui->BusTV->setModel(qSqlTableModel);
}

void ShowBus::on_Back_PB_clicked()
{
    this->hide();
}

