#include "BaseBusCar.h"
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