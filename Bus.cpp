#include <iostream>
#include "Bus.h"
using namespace std;

Bus::Bus() {
    id = 0; year = 0; price = 0; rNumber = 0; places = 0; model = ""; placesInvalidity = false;
}
Bus::Bus(int id, int year, int price, int rNumber, int places, string model, bool placesInvalidity)
{
    this->id = id;
    this->year = year;
    this->price = price;
    this->rNumber = rNumber;
    this->places = places;
    this->model = model;
    this->placesInvalidity = placesInvalidity;

}
Bus::Bus(const Bus& other)
{
    this->id = other.id;
    this->year = other.year;
    this->price = other.price;
    this->rNumber = other.rNumber;
    this->places = other.places;
    this->model = other.model;
    this->placesInvalidity = other.placesInvalidity;
}
Bus::~Bus()
{

}
std::istream& operator>>(istream& cin, Bus& bus) {
    cout << "Enter Bus id: " << endl;
    cin >> bus.id;
    cout << "Enter year: " << endl;
    cin >> bus.year;
    cout << "Enter Price: " << endl;
    cin >> bus.price;
    cout << "Enter Registration Number: " << endl;
    cin >> bus.rNumber;
    cout << "Enter Number of Places: " << endl;
    cin >> bus.places;
    cout << "Enter Model: " << endl;
    cin >> bus.model;
    cout << "Enter places Invalidity (Yes or No): " << endl;
    cin >> bus.placesInvalidity;
    string placesInvalidity;
    cin >> placesInvalidity;
    bus.placesInvalidity = (placesInvalidity == "Yes");


    return cin;
}
std::ostream& operator<<(ostream& out, const Bus& bus)
{
    out << "Bus Information:" << endl;
    out << "ID: " << bus.id << endl;
    out << "Year: " << bus.year << endl;
    out << "Price: " << bus.price << endl;
    out << "Registration Number: " << bus.rNumber << endl;
    out << "Number of Places: " << bus.places << endl;
    out << "Model: " << bus.model << endl;
    out << "placesInvalidity: " << bus.placesInvalidity << (bus.placesInvalidity ? "Yes" : "No") << endl;

    return out;
}
bool Bus::operator==(const Bus& other) const {
    return (id == other.id) &&
        (year == other.year) &&
        (price == other.price) &&
        (rNumber == other.rNumber) &&
        (places == other.places) &&
        (model == other.model) &&
        (placesInvalidity == other.placesInvalidity);
}