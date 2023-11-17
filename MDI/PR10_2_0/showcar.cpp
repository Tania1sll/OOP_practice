#include "showcar.h"
#include "ui_showcar.h"
#include "Car.h"
#include"sqlitedbmanager.h"
#include <QSqlTableModel>

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

void ShowCar::updateList(SQliteDBManager* sQliteDBManager)
{
    QSqlTableModel *qSqlTableModel =  new QSqlTableModel(this, sQliteDBManager->getDB());
    qSqlTableModel->setTable(sQliteDBManager->CAR_NAME);
    qSqlTableModel->select();
    ui->CarTV->setModel(qSqlTableModel);

}

void ShowCar::on_BackCar_PB_clicked()
{
    this->hide();
}

