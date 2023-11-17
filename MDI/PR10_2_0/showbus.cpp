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

    QSqlTableModel *qSqlTableModel =  new QSqlTableModel(this, sQliteDBManager->getDB());
    qSqlTableModel->setTable(sQliteDBManager->BUS_NAME_TABLE);
    qSqlTableModel->select();
    ui->BusTV->setModel(qSqlTableModel);
}

void ShowBus::on_Back_PB_clicked()
{
    this->hide();
}

