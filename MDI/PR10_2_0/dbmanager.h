#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "Car.h"
#include "Bus.h"
#include"BaseBusCar.h"
#include <QSqlDatabase>

// Абстрактний клас (інтерфейс) для роботи з базою даних
class DBManager {
public:
    // Суто віртуальний метод для підключення до бази даних
    virtual bool connectToDataBase() = 0;

    // Суто віртуальний метод для отримання обробника (хендлера) підключення до БД
    virtual QSqlDatabase getDB() = 0;

    // Суто віртуальний метод для вставки записів у таблицю
    virtual bool inserIntoTable(const Car& car) = 0;
    virtual bool inserIntoTable(const Bus& bus) = 0;
};

#endif // DBMANAGER_H
//#include <QDialog>

//namespace Ui {
//class DBManager;
//}

//class DBManager : public QDialog
//{
//    Q_OBJECT

//public:
//    explicit DBManager(QWidget *parent = nullptr);
//    ~DBManager();

//private:
//    Ui::DBManager *ui;
//};

//#endif // DBMANAGER_H
