#include "Car.h"
#include "BaseBusCar.h"

Car::Car() {
    door = 0;
    vinCode = "";
}
Car::Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode)
{
    this->door = door;
    this->vinCode = vinCode;

}
Car::Car(const Car& other)
{
    this->door = other.door;
    this->vinCode = other.vinCode;
}
Car::~Car()
{

}
std::istream& operator>>(std::istream& input, Car& obj) {
    BaseBusCar& basebus = obj;
    input >> basebus;
    cout << "Enter Number of Doors: " << endl;
    input >> obj.door;
    cout << "Enter VIN Code: " << endl;
    input >> obj.vinCode;
    return input;
}
std::ostream& operator<<(std::ostream& output, Car& obj)
{
    BaseBusCar& basebus = obj;
    output<< basebus;
    output << "Number of Doors: " << obj.door<< endl;
    output << "VIN Code: " << obj.vinCode << endl;
    return output;
}
bool Car::operator==(const Car& other) const {
    return (door == other.door) &&  (vinCode == other.vinCode);
}