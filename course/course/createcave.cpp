#include "createcave.h"
#include "ui_createcave.h"

CreateCave::CreateCave(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCave)
{
    ui->setupUi(this);
}

CreateCave::~CreateCave()
{
    delete ui;
}
