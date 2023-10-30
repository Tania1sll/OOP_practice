#include "Bus.h"
#include "BaseBusCar.h"
std::istream& operator>>(std::istream& input, Bus& obj) {
	BaseBusCar& basebus = obj;
	input >> basebus;
	cout << "Enter places Invalidity (Yes or No): " << endl;
	string placesInvalidity;
	input >> placesInvalidity;
	obj.placesInvalidity = (placesInvalidity == "Yes");
	return input;
}
std::ostream& operator<<(std::ostream& output, Bus& obj) {
	BaseBusCar& basebus = obj;
	output << basebus;
	output << "placesInvalidity: " << (obj.placesInvalidity ? "Yes" : "No") << endl;

	return output;
}
bool Bus::operator==(const Bus& bus) const {
	return placesInvalidity == bus.placesInvalidity ;
}
void Bus::input() {
	BaseBusCar::input();
	cout << "Enter places Invalidity (Yes or No): ";
	cin >> placesInvalidity;
	string placesInvalidity;
	placesInvalidity = (placesInvalidity == "Yes");
}
void Bus::output() {
	BaseBusCar::output();
	cout << "Enter places Invalidity" << (placesInvalidity ? "Yes" : "No") << endl;
}