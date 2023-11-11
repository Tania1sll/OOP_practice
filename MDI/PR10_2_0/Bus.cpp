#include "Bus.h"
#include "BaseBusCar.h"
Bus::Bus() {
	placesInvalidity = "";
}
Bus::Bus(int id, int year, int price, int rNumber, int places,string placesInvalidity)
    :BaseBusCar(id, year, price, rNumber, places), placesInvalidity(placesInvalidity) {}

Bus::Bus(const Bus& other)
{
	this->placesInvalidity = other.placesInvalidity;
}
Bus::~Bus()
{

}
int Bus::getId() { return BaseBusCar::getId(); }
int Bus::getYear() { return BaseBusCar::getYear(); }
int Bus::getPrice() { return BaseBusCar:: getPrice(); }
int Bus::getPlaces() { return BaseBusCar:: getPlaces(); }
int Bus::getRNumber() { return BaseBusCar:: getRNumber(); }
string Bus::getPlacesInvalidity() { return placesInvalidity; }

//std::istream& operator>>(std::istream& input, Bus& obj) {
//	BaseBusCar& basebus = obj;
//	input >> basebus;
//	cout << "Enter places Invalidity (Yes or No): " << endl;
//	string placesInvalidity;
//	input >> placesInvalidity;
//	obj.placesInvalidity = (placesInvalidity == "Yes");
//	return input;
//}
//std::ostream& operator<<(std::ostream& output, Bus& obj) {
//	BaseBusCar& basebus = obj;
//	output << basebus;
//    output << "placesInvalidity: " << (obj.placesInvalidity ? "Yes" : "No") << endl;

//	return output;
//}
//bool Bus::operator==(const Bus& bus) const {
//	return placesInvalidity == bus.placesInvalidity ;
//}
void Bus::input() {
	BaseBusCar::input();
	cout << "Enter places Invalidity (Yes or No): ";
	cin >> placesInvalidity;
	string placesInvalidity;
	placesInvalidity = (placesInvalidity == "Yes");
}
void Bus::output() {
	BaseBusCar::output();
    cout << "Enter places Invalidity: " << placesInvalidity << endl;
}
//int Bus::getId() { return BaseBusCar::getId(); }
