#include "createwater.h"
#include "ui_createwater.h"

CreateWater::CreateWater(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateWater)
{
    ui->setupUi(this);
}

CreateWater::~CreateWater()
{
    delete ui;
}
