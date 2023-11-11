#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Car.h"
#include "Bus.h"
#include "BaseBusCar.h"
#include <QList>
#include "ShowCar.h"
#include "ShowBus.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void addedCar(QList<Car*> car);
    void addedBus(QList<Bus*> bus);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
//    void on_CreateCar_PB_clicked();
    void addCar(Car* car);
    void addBus(Bus* bus);

    void on_CreateCar_PB_clicked();

    void on_PB_ShowCar_clicked();

    void on_PB_Exit_clicked();

    void on_PB_CreateBus_clicked();

    void on_PB_ShowBus_clicked();

private:
    Ui::MainWindow *ui;
    QList<Car*>cars;
    ShowCar* showCar;
    QList<Bus*> buses;
    ShowBus* showBus;
};
#endif // MAINWINDOW_H
