#include "BaseBusCar.h"
#include "Car.h"
#include "Bus.h"

BaseBusCar::BaseBusCar(): id(0), year(0), price(0), rNumber(0), places(0){}

BaseBusCar::BaseBusCar(int id, int  year, int price, int rNumber, int places ) {
    this->id = id;
    this->year = year;
    this->price = price;
    this->rNumber = rNumber;
    this->places = places;
}

BaseBusCar::BaseBusCar(const BaseBusCar& other)
    : id(other.id), year(other.year), price(other.price), rNumber(other.rNumber), places(other.places) {}

BaseBusCar::~BaseBusCar() {

}

int BaseBusCar::getId()const { return id; }
int BaseBusCar::getYear()const { return year; }
int BaseBusCar::getPrice()const { return price; }
int BaseBusCar::getRNumber()const { return rNumber; }
int BaseBusCar::getPlaces()const { return places; }



std::istream& operator>>(std::istream& input, BaseBusCar& obj) {
    cout << "Enter id: " << endl;
    input >> obj.id;
    cout << "Enter year: " << endl;
    input >> obj.year;
    cout << "Enter Price: " << endl;
    input >> obj.price;
    cout << "Enter rNumber: " << endl;
    input >> obj.rNumber;
    cout << "Enter Number of Places: " << endl;
    input >> obj.places;
	return input;
}
std::ostream& operator<<(std::ostream& output, BaseBusCar& obj) {
    output << "ID: " << obj.id << endl;
    output << "Year: " << obj.year << endl;
    output << "Price: " << obj.price << " $" << endl;
    output << "Registration Number: " << obj.rNumber << endl;
    output << "Number of Places: " << obj.places << endl;
	return output;
}
void BaseBusCar::input() {
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter rNumber: ";
    cin >> rNumber;
    cout << "Enter Number of Places: ";
    cin >> places;
}
void BaseBusCar::output() {
	cout << "id: " << id << endl;
	cout << "year: " << year<< endl;
	cout << "Enter Price: " << price << endl;
	cout << "Enter rNumber: " << rNumber << endl;
	cout << "Enter Number of Places: " << places << endl;
}
//int BaseBusCar::getId()const
//{
//    return id;
//}
