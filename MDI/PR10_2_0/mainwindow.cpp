#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createcar.h"
#include "QListWidget"
#include "showcar.h"
#include "createbus.h"
#include "showbus.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
     ui->setupUi(this);
    this->showCar= new ShowCar;
    this->showBus= new ShowBus;
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_pushButton_clicked()
//{
//    CreateCar createCar;
//    createCar.setWindowTitle("Car");
//    createCar.setModal(true);
//    connect(&createCar, &CreateCar :: created, this, &MainWindow::addCar);
//    createCar.exec();

//}
void MainWindow:: addCar(Car* car)
{
    cars.append(car);
    emit addedCar(this->cars);
}
void MainWindow:: addBus(Bus* bus)
{
    buses.append(bus);
    emit addedBus(this->buses);
}
void MainWindow::on_CreateCar_PB_clicked()
{
    CreateCar createCar;
    createCar.setWindowTitle("Car");
    createCar.setModal(true);
    connect(&createCar, &CreateCar :: created, this, &MainWindow::addCar);
    connect(this, &MainWindow:: addedCar, this->showCar, &ShowCar:: updateList);
    createCar.exec();
}


void MainWindow::on_PB_ShowCar_clicked()
{
    this->showCar->show();

}


void MainWindow::on_PB_Exit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_PB_CreateBus_clicked()
{
    CreateBus createBus;
    createBus.setWindowTitle("Bus");
    createBus.setModal(true);
    connect(&createBus, &CreateBus :: created, this, &MainWindow::addBus);
    connect(this, &MainWindow:: addedBus, this->showBus, &ShowBus:: updateList);
    createBus.exec();
}


void MainWindow::on_PB_ShowBus_clicked()
{
    this->showBus->show();

}

