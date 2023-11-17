#include "createbus.h"
#include "ui_createbus.h"
#include "QMessageBox"
#include <QDebug>
#include <QFile>
#include <QDateTime>

CreateBus::CreateBus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBus)
{
    ui->setupUi(this);
}

CreateBus::~CreateBus()
{
    delete ui;
}

void CreateBus::on_CreateBus_PB_clicked()
{
    if (ui->Id_LN->text() != "" &&
        ui->Year_LN->text() != "" &&
        ui->Price_LN->text() != "" &&
        ui->Places_LN->text() != ""&&
        ui->rNumber_LN->text() != ""&&
        ui->Invalidity_LN->text() != "")

    {

        Bus *bus = new Bus(
            ui->Id_LN->text().toInt(),
            ui->Year_LN->text().toInt(),
            ui->Price_LN->text().toInt(),
            ui->Places_LN->text().toInt(),
            ui->rNumber_LN->text().toInt(),
            ui->Invalidity_LN->text().toStdString());
        QMessageBox::information(this, "Created", "Bus created");
        emit created(bus);
        this->hide();
    }
    else {
        QMessageBox::critical(this, "Error!", "You have not entered all the values!");
    }
}


