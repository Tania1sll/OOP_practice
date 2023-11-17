#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QDialog>
#include"dbmanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
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
    const QString TABLE_PLACESINVALIDITY = "placesinvalidity";
    bool closeDataBase();
    bool createTables();
     bool createTables_Car();
     bool createTables_Bus();
    SQliteDBManager();
   bool connectToDataBase() override;
    QSqlDatabase getDB() override;
    bool inserIntoTable(const Car& car) override;
    bool inserIntoTable(const Bus& bus) override;

    void writeToLog(const QString& message);
};
#endif // SQLITEDBMANAGER_H
