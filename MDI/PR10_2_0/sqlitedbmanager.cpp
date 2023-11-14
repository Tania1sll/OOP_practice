#include "sqlitedbmanager.h"
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDebug>
#include <QDateTime>
void logError(QString errorText) {
    QFile file("logfile.txt");
    if (file.open(QIODevice::Append)) {
        QTextStream stream(&file);
        stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " + errorText;
    }
    file.close();
}

SQliteDBManager* SQliteDBManager::instance = nullptr;

SQliteDBManager::SQliteDBManager()
{   this-> db = QSqlDatabase::addDatabase("QSQLITE");
   // db.setHostName(PR11DataBase);
    this-> db.setDatabaseName("DataBase.db");
    this-> db.setDatabaseName("DataBase.db");
    if (!this->connectToDataBase()) {
        logError("Unable to open database. Error description: " + db.lastError().text());
        qFatal() << "Unable to open database. Error description: " + db.lastError().text();
    }
}
 //Метод для отримання екземпляру даного класу (патерн Singleton)
SQliteDBManager* SQliteDBManager::getInstance() {
    if (instance == nullptr) {
        instance = new SQliteDBManager();
    }
    return instance;
}

//void SQliteDBManager::connectToDataBase() {
//    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
//     * В залежності від результату виконуємо відкриття бази даних або її відновлення
//     * */
//    if (QFile("DataBase.db").exists()) {
//        this->openDataBase();
//    } else {
//        this->restoreDataBase();
//    }
//}
bool SQliteDBManager::connectToDataBase() {
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if(db.open()){
        return true;
    } else
        return false; /*else {
        this->restoreDataBase();
    }*/
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

bool SQliteDBManager::createTables_Bus()
{
    QSqlQuery query;
    if(!query.exec("CREATE TABLE "+ BUS_NAME_TABLE+" ("
                  "id INTEGER PRIMARY KEY,"
                    "year INTEGER NOT NULL,"
                     "price INTEGER NOT NULL,"
                     "places INTEGER NOT NULL,"
                      "rNumber INTEGER NOT NULL,"
                   "placesinvalidity VARCHAR(255)"
                                                       ")"))
    {
        logError("Unable to create table: " + this->BUS_NAME_TABLE + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to create table: " + this->BUS_NAME_TABLE + ". Error description: " + query.lastError().text();
        return false;
    }
        return true;
}
bool SQliteDBManager::createTables_Car()
{
        QSqlQuery query;
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
        logError("Unable to create table: " + this->CAR_NAME + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to create table: " + this->CAR_NAME + ". Error description: " + query.lastError().text();
        return false;
        }
        return true;
}
bool SQliteDBManager::createTables(){

        bool success = true;

        // Check if the Book table exists.
        QSqlQuery query_car;
        //  query_book.prepare("SELECT name FROM sqlite_master WHERE type='table' AND name='Book'");
        query_car.exec();

        if (!query_car.next()) {
            // The Book table does not exist. Create it.
            success = createTables_Car();
        }

        // Check if the Song table exists.
        QSqlQuery query_bus;
        //query_song.prepare("SELECT name FROM sqlite_master WHERE type='table' AND name='Song'");
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
                                          "VALUES (:id, :year, :price, :places, :rNumber, :placesinvalidity)");
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
        query.bindValue(":placesinvalidity", QString::fromStdString(bus.getPlacesInvalidity()));

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
