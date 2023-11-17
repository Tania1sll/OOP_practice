#include "sqlitedbmanager.h"
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDebug>
#include <QDateTime>
void SQliteDBManager::writeToLog(const QString& message) {
    QFile logfile("logfile.txt");
    if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream output(&logfile);
        output << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " << message << "\n";
        logfile.close();
    }
}
SQliteDBManager::SQliteDBManager()
{   this-> db = QSqlDatabase::addDatabase("QSQLITE");
    this-> db.setDatabaseName("DataBase.db");
    this-> db.setDatabaseName("DataBase.db");
    if (!this->connectToDataBase()) {
        writeToLog("failed to connect to database");
    }
    else {
        writeToLog("Connected to the database");
    }
}
bool SQliteDBManager::connectToDataBase() {
    try {
        if (db.open()) {
            return true;
        } else {
            writeToLog("Not connected to the database");
            return false;
        }
    } catch (QSqlError error) {
        qDebug() << error.text();
        exit(1);
    }
}

QSqlDatabase SQliteDBManager::getDB() {
    return db;
}
//bool SQliteDBManager::openDataBase() {
//    if (db.open()) {
//        return true;
//    } else
//        return false;
//}


bool SQliteDBManager::closeDataBase() {
//    db.close();
    writeToLog(db.isOpen() ? "Database closed" : "Database not closed");

    if (db.isOpen()) {
        db.close();
        return true;
    } else {
        return false;
    }
}

bool SQliteDBManager::createTables_Bus()
{
    QSqlQuery query;
     try {
    if(!query.exec("CREATE TABLE "+ BUS_NAME_TABLE+" ("
                  "id INTEGER PRIMARY KEY,"
                    "year INTEGER NOT NULL,"
                     "price INTEGER NOT NULL,"
                     "places INTEGER NOT NULL,"
                      "rNumber INTEGER NOT NULL,"
                   "placesinvalidity VARCHAR(255)"
                                                       ")"))
    {
            writeToLog("Can't create table bus");
            return false;
        } else {
            return true;
        }
     } catch (QSqlError error) {
        qDebug() << error.text();
        writeToLog("Error creating table bus");
        return false;
     }
}
bool SQliteDBManager::createTables_Car()
{
        QSqlQuery query;
     try{
        if(!query.exec("CREATE TABLE "+  CAR_NAME+" ("
                                                     "id INTEGER PRIMARY KEY,"
                                                     "year INTEGER NOT NULL,"
                                                     "price INTEGER NOT NULL,"
                                                     "places INTEGER NOT NULL,"
                                                     "rNumber INTEGER NOT NULL ,"
                                                     "door INTEGER NOT NULL,"
                                                     "model VARCHAR(255) ,"
                                                     "vinCode VARCHAR(255) "
                                                     ")"
                        ))
        {
        writeToLog("Can't create table car");
        return false;
        } else {
        return true;
        }
} catch (QSqlError error) {
        qDebug() << error.text();
        writeToLog("Error creating table car");
        return false;
}
}
bool SQliteDBManager::createTables(){

        bool success = true;
        QSqlQuery query_car;
        query_car.exec();

        if (!query_car.next()) {
            success = createTables_Car();
        }

        QSqlQuery query_bus;
        query_bus.exec();

        if (!query_bus.next()) {
            success = createTables_Bus();
        }

        return success;

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

        query.bindValue(":id", QString::number(car.getId()));
        query.bindValue(":year", QString::number(car.getYear()));
        query.bindValue(":price", QString::number(car.getPrice()));
        query.bindValue(":places", QString::number(car.getPlaces()));
        query.bindValue(":rNumber", QString::number(car.getRNumber()));
        query.bindValue(":door", QString::number(car.getDoor()));
        query.bindValue(":model", QString::fromStdString(car.getModel()));
        query.bindValue(":vinCode", QString::fromStdString(car.getVinCode()));

        if (!query.exec()) {
            writeToLog("Can't insert into " + CAR_NAME);
            writeToLog(query.lastError().text());
            return false;
        }
        return true;
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
                                          "VALUES (:id, :year, :price, :places, :rNumber, :placesinvalidity)");

        query.bindValue(":id", QString::number(bus.getId()));
        query.bindValue(":year", QString::number(bus.getYear()));
        query.bindValue(":price", QString::number(bus.getPrice()));
        query.bindValue(":places", QString::number(bus.getPlaces()));
        query.bindValue(":rNumber", QString::number(bus.getRNumber()));
        query.bindValue(":placesinvalidity", QString::fromStdString(bus.getPlacesInvalidity()));

        if (!query.exec()) {
        writeToLog("Can't insert into " + BUS_NAME_TABLE);
        writeToLog(query.lastError().text());
        return false;
        }

        return true;
}
