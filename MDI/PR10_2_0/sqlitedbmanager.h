#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QDialog>
#include"dbmanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

//namespace Ui {
//class SQLiteDBManager;
//}

//class SQLiteDBManager : public QDialog
//{
//    Q_OBJECT

//public:
//    explicit SQLiteDBManager(QWidget *parent = nullptr);
//    ~SQLiteDBManager();

//private:
//    Ui::SQLiteDBManager *ui;
//};
class SQliteDBManager: public DBManager
{     QSqlDatabase db;


public:
    static SQliteDBManager* instance;
    const QString CAR_NAME = "Car";
    const QString BUS_NAME_TABLE = "Bus";
    const QString TABLE_ID = "id";
    const QString TABLE_YEAR = "year";
    const QString TABLE_PRICE = "price";
    const QString TABLE_PLACES = "places";
    const QString TABLE_RNUMBER = "rNumber";
    const QString TABLE_DOOR = "door";
    const QString TABLE_MODEL = "model";
    const QString TABLE_VINCODE= "vinCode";
    const QString TABLE_PLACESINVALIDITY = "places invalidity";
//    const QString TABLE_LIST_OF_ADD = "listOfAdd";
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
    SQliteDBManager();
    static SQliteDBManager* getInstance();

    // Метод для підключення до бази даних
    void connectToDataBase() override;

    // Метод для отримання обробника (хендлера) підключення до БД
    QSqlDatabase getDB() override;

    // Метод для вставки записів у таблицю
    bool inserIntoTable(const Car& car) override;
    bool inserIntoTable(const Bus& bus) override;
};
#endif // SQLITEDBMANAGER_H
