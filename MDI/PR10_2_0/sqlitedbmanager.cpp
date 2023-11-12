#include "sqlitedbmanager.h"
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDebug>

SQliteDBManager* SQliteDBManager::instance = nullptr;

SQliteDBManager::SQliteDBManager()
{   this-> db = QSqlDatabase::addDatabase("QSQLITE");
   // db.setHostName(PR11DataBase);
    this-> db.setDatabaseName("DataBase.db");
}
 //Метод для отримання екземпляру даного класу (патерн Singleton)
SQliteDBManager* SQliteDBManager::getInstance() {
    if (instance == nullptr) {
        instance = new SQliteDBManager();
    }
    return instance;
}

void SQliteDBManager::connectToDataBase() {
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if (QFile("DataBase.db").exists()) {
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}


QSqlDatabase SQliteDBManager::getDB() {
    return db;
}

// Метод відновлення бази даних
bool SQliteDBManager::restoreDataBase() {
    if (this->openDataBase()) {
        if (!this->createTables()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

// Метод для відкриття бази даних
bool SQliteDBManager::openDataBase() {
    /* База даних відкривається по вказаному шляху
     * та імені бази даних, якщо вона існує
     * */
    if (db.open()) {
        return true;
    } else
        return false;
}

// Метод закриття бази даних
void SQliteDBManager::closeDataBase() {
    db.close();
}

bool SQliteDBManager::createTables()
{
    QSqlQuery query;
    if(!query.exec("CREATE TABLE "+  CAR_NAME+" ("
                     /* TABLE_ID*/ "id INTEGER PRIMARY KEY,"
                     /*  TABLE_NUMBER */ "year INTEGER,"
                     /*  TABLE_FLOOR*/ "price INTEGER ,"
                     /*TABLE_NUM_OF_ROOM*/ "places INTEGER ,"
                     /* TABLE_AREA*/  "rNumber INTEGER ,"
                     /* TABLE_STREET*/ "door INTEGER ,"
                     /*TABLE_SUN_SIDE*/ "model VARCHAR(255) ,"
                     /*TABLE_CORNER_APAR*/  "vinCode VARCHAR(255) "
                     ")"
                     ))
    {
        qDebug() << "DataBase: error of create table: " <<CAR_NAME;
        qDebug() << query.lastError().text();
        return false;
    }
       // return true;
    if(!query.exec("CREATE TABLE "+ BUS_NAME_TABLE+" ("
                  /*  TABLE_ID*/ "id INTEGER PRIMARY KEY,"
                   /* TABLE_NUMBER*/ "year INTEGER NOT NULL,"
                     /*  TABLE_FLOOR*/ "price INTEGER NOT NULL,"
                     /*TABLE_NUM_OF_ROOM*/ "places INTEGER NOT NULL,"
                     /* TABLE_AREA*/  "rNumber INTEGER NOT NULL,"
                   /* TABLE_LIST_OF_ADD*/ "places invalidity VARCHAR(255)"
                                                       ")")){
   qDebug() << "DataBase: error of create table: " <<BUS_NAME_TABLE;
   qDebug() << query.lastError().text();
        return false;
    }
        return true;
}

bool SQliteDBManager::inserIntoTable(const Car& car) {
        QSqlQuery query;
        query.prepare("INSERT INTO " + CAR_NAME + " (" +
                      TABLE_ID + ", " +
                      TABLE_YEAR + ", " +
                      TABLE_PRICE + ", " +
                      TABLE_PLACES + ", " +
                      TABLE_RNUMBER + ", " +
                      TABLE_DOOR + ", " +
                      TABLE_MODEL + ", " +
                      TABLE_VINCODE + ") "
 "VALUES (:id, :year, :price, :places, :rNumber, :door, :model, :vinCode)");
//            qDebug() << "ID: " << car.getId();
//        qDebug() << "year: " << car.getYear();
//        qDebug() << "price: " << car.getPrice();
//        qDebug() << "places: " << car.getPlaces();
//        qDebug() << "rNumber: " << car.getRNumber();
//         qDebug() << "door: " << car.getDoor();
//         qDebug() << "model: " << QString::fromStdString(car.getModel());
//        qDebug() << "vinCode: " << QString::fromStdString(car.getVinCode());

        query.bindValue(":id", QString::number(car.getId()));
        query.bindValue(":year", QString::number(car.getYear()));
        query.bindValue(":price", QString::number(car.getPrice()));
        query.bindValue(":places", QString::number(car.getPlaces()));
        query.bindValue(":rNumber", QString::number(car.getRNumber()));
        query.bindValue(":door", QString::number(car.getDoor()));
        query.bindValue(":model", QString::fromStdString(car.getModel()));
        query.bindValue(":vinCode", QString::fromStdString(car.getVinCode()));

        if (!query.exec()) {
        qDebug() << "DataBase: error of insert into " << CAR_NAME;
        qDebug() << query.lastError().text();
        return false;
        } else {
        return true;
        }
}
bool SQliteDBManager::inserIntoTable(const Bus& bus) {
        QSqlQuery query;
        query.prepare("INSERT INTO " + BUS_NAME_TABLE + " (" +
                      TABLE_ID + ", " +
                      TABLE_YEAR + ", " +
                      TABLE_PRICE + ", " +
                      TABLE_PLACES + ", " +
                      TABLE_RNUMBER + ", " +
                      TABLE_PLACESINVALIDITY + ") "
                                          "VALUES (:id, :year, :price, :places, :rNumber, :places invalidity)");
//        query.prepare("INSERT INTO " + BUS_NAME_TABLE + " (" +
//                      TABLE_ID + ", " +
//                      TABLE_YEAR + ", " +
//                      TABLE_PRICE + ", " +
//                      TABLE_PLACES + ", " +
//                      TABLE_RNUMBER + ", " +
//                      "`places invalidity`) " // Використання backticks (`) для імені стовпця
//                      "VALUES (:id, :year, :price, :places, :rNumber, :placesInvalidity)");

//        qDebug() << "ID: " << bus.getId();
//        qDebug() << "year: " << bus.getYear();
//        qDebug() << "price: " << bus.getPrice();
//        qDebug() << "places: " << bus.getPlaces();
//        qDebug() << "rNumber: " << bus.getRNumber();
//        qDebug() << "places invalidity: " << QString::fromStdString(bus.getPlacesInvalidity());

        try {
        query.bindValue(":id", QString::number(bus.getId()));
        query.bindValue(":year", QString::number(bus.getYear()));
        query.bindValue(":price", QString::number(bus.getPrice()));
        query.bindValue(":places", QString::number(bus.getPlaces()));
        query.bindValue(":rNumber", QString::number(bus.getRNumber()));
        query.bindValue(":places invalidity", QString::fromStdString(bus.getPlacesInvalidity()));

        if (!query.exec()) {
            qDebug() << "DataBase: error of insert into " << BUS_NAME_TABLE;
            qDebug() << query.lastError().text();
            return false;
        } else {
            return true;
        }
        } catch (const std::exception& e) {
        qDebug() << "Exception caught: " << e.what();
        return false;
        }
}
