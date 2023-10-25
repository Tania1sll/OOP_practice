#include <iostream>
#include "Car.h"
using namespace std;

Car::Car() {
    id = 0; year = 0; price = 0; rNumber = 0; places = 0; door = 0; model = ""; vinCode = "";
}
Car::Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode)
{
    this->id = id;
    this->year = year;
    this->price = price;
    this->rNumber = rNumber;
    this->places = places;
    this->door = door;
    this->model = model;
    this->vinCode = vinCode;

}
Car::Car(const Car& other)
{
    this->id = other.id;
    this->year = other.year;
    this->price = other.price;
    this->rNumber = other.rNumber;
    this->places = other.places;
    this->door = other.door;
    this->model = other.model;
    this->vinCode = other.vinCode;
}
Car::~Car()
{

}
std::istream& operator>>(istream& cin, Car& car) {
    cout << "Enter Car id: "<< endl;
    cin >> car.id;

    cout << "Enter year: " << endl;
    cin >> car.year;

    cout << "Enter Price: " << endl;
    cin >> car.price;

    cout << "Enter Registration Number: " << endl;
    cin >> car.rNumber;

    cout << "Enter Number of Places: " << endl;
    cin >> car.places;

    cout << "Enter Number of Doors: " << endl;
    cin >> car.door;

    cout << "Enter Model: " << endl;
    cin >> car.model;

    cout << "Enter VIN Code: " << endl;
    cin >> car.vinCode;

    return cin;
}
std::ostream& operator<<(ostream& out, const Car& car)
{
    out << "Car Information:" << endl;
    out << "ID: " << car.id << endl;
    out << "Year: " << car.year << endl;
    out << "Price: " << car.price << endl;
    out << "Registration Number: " << car.rNumber << endl;
    out << "Number of Places: " << car.places << endl;
    out << "Number of Doors: " << car.door << endl;
    out << "Model: " << car.model << endl;
    out << "VIN Code: " << car.vinCode << endl;

    return out;
}
