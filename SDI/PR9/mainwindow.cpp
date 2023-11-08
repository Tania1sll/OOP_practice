#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionShow_triggered()
{
    if (car){
     QMessageBox::information(this, "Show", "Object`s datas:\n"
"id: " + QString::number(car->getId()) + "\n"
"year: " + QString::number(car->getYear())+"\n"
"places: " + QString::number(car->getPlaces()) + "\n"
"price: " + QString::number(car->getPrice()) + "\n"
"rNumber: " + QString::number(car->getRNumber()) + "\n"
"door: " + QString::number(car->getDoor()) + "\n"
"model: " + QString::fromStdString(car->getModel()) + "\n"
"vinCode: " + QString::fromStdString(car->getVinCode()));
    }
    else{
     QMessageBox::warning(this, "Warning", "Car object is not created yet.");
    }
}

void MainWindow::on_actionCreate_triggered()
{
    QString id=ui->lineEdit_id->text();
    QString year=ui->lineEdit_year->text();
    QString price=ui->lineEdit_price->text();
    QString rNumber=ui->lineEdit_rNumber->text();
    QString places=ui->lineEdit_places->text();
    QString door=ui->lineEdin_door->text();
    QString model=ui->lineEdit_model->text();
    QString vinCode=ui->lineEdit_vinCode->text();

    if(id.isEmpty()||year.isEmpty()||price.isEmpty()||rNumber.isEmpty()||places.isEmpty()
        ||door.isEmpty()||model.isEmpty()||vinCode.isEmpty())
    {
        QMessageBox::critical(this,"Problem","Empty string");
    }
    else
    {
this->car= new Car(id.toInt(), year.toInt(), price.toInt(), rNumber.toInt(), places.toInt(),
door.toInt(), model.toStdString(), vinCode.toStdString());

        QMessageBox::about(this, "Create", "Added car");
    }
}
void MainWindow::on_pushButton_add_clicked()
{
    QString id=ui->lineEdit_id->text();
    QString year=ui->lineEdit_year->text();
    QString price=ui->lineEdit_price->text();
    QString rNumber=ui->lineEdit_rNumber->text();
    QString places=ui->lineEdit_places->text();
    QString door=ui->lineEdin_door->text();
    QString model=ui->lineEdit_model->text();
    QString vinCode=ui->lineEdit_vinCode->text();

    if(id.isEmpty()||year.isEmpty()||price.isEmpty()||rNumber.isEmpty()||places.isEmpty()
        ||door.isEmpty()||model.isEmpty()||vinCode.isEmpty())
    {
        QMessageBox::critical(this,"Problem","Empty string");

    }
    else{
        this->car= new Car(id.toInt(), year.toInt(), price.toInt(), rNumber.toInt(), places.toInt(),
                            door.toInt(), model.toStdString(), vinCode.toStdString());

        QMessageBox::about(this, "Create", "Added car");
    }
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}




