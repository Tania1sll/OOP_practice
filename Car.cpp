#include "Car.h"
#include "BaseBusCar.h"

Car::Car() {
    door = 0;
    model = "";
    vinCode = "";
}

Car::Car(const Car& other)
{
    this->door = other.door;
    this->vinCode = other.vinCode;
    this->model = other.model;
}
Car::~Car()
{

}
std::istream& operator>>(std::istream& input, Car& obj) {
    BaseBusCar& basebus = obj;
    input >> basebus;
    cout << "Enter Number of Doors: " << endl;
    input >> obj.door;
    cout << "Enter model: " << endl;
    input >> obj.model;
    cout << "Enter VIN Code: " << endl;
    input >> obj.vinCode;
    return input;

}
std::ostream& operator<<(std::ostream& output, Car& obj)
{
    BaseBusCar& basebus = obj;
    output<< basebus;
    output << "Number of Doors: " << obj.door<< endl;
    output << "model: " << obj.model << endl;
    output << "VIN Code: " << obj.vinCode << endl;
    return output;
}
bool Car::operator==(const Car& other) const {
    return (door == other.door) &&  (vinCode == other.vinCode)&& (model == other.model);
}
void Car::input() {
    BaseBusCar::input();
    cout << "Enter Number of Doors: " << endl;
    cin >> door;
    cout << "Enter model: " << endl;
    cin >> model;
    cout << "Enter VIN Code: " << endl;
    cin >> vinCode;
}
void Car::output() {
    BaseBusCar::output();
    cout << "door: " << door << endl;
    cout << "model: " << model << endl;
    cout << "vin code: " << vinCode << endl;
}