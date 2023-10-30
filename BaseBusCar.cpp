#include "BaseBusCar.h"
#include "Car.h"
#include "Bus.h"
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
    cout << "Enter id: " << endl;
    cin >> id;
    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter Price: " << endl;
    cin >> price;
    cout << "Enter rNumber: " << endl;
    cin >> rNumber;
    cout << "Enter Number of Places: " << endl;
    cin >> places;
}
void BaseBusCar::output() {
	cout << "id: " << id << endl;
	cout << "year: " << year<< endl;
	cout << "Enter Price: " << price << endl;
	cout << "Enter rNumber: " << rNumber << endl;
	cout << "Enter Number of Places: " << places << endl;
}