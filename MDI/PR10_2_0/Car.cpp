#include "Car.h"
//#include "BaseBusCar.h"

Car::Car() {
    door = 0;
    model = "";
    vinCode = "";
}
Car:: Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode):
    BaseBusCar(id, year, price, rNumber, places), door(door), model(model), vinCode(vinCode){}


Car::Car(const Car& other)
{
    this->door = other.door;
    this->vinCode = other.vinCode;
    this->model = other.model;
}
Car::~Car()
{

}
int Car::getId() { return BaseBusCar::getId(); }
int Car::getYear() { return BaseBusCar::getYear(); }
int Car::getPrice() { return BaseBusCar:: getPrice(); }
int Car::getRNumber() { return BaseBusCar:: getRNumber(); }
int Car::getPlaces() { return BaseBusCar:: getPlaces(); }
int Car::getDoor() { return door; }
string Car::getModel() { return model; }
string Car::getVinCode(){return vinCode; }

istream& operator>>(std::istream& input, Car& obj) {
   // BaseBusCar& basebus = obj;
  //  input >> basebus;
    cout << "Enter Number of Doors: " << endl;
    input >> obj.door;
    cout << "Enter model: " << endl;
    input >> obj.model;
    cout << "Enter VIN Code: " << endl;
    input >> obj.vinCode;
    return input;

}
ostream& operator<<(std::ostream& output, Car& obj)
{
   // BaseBusCar& basebus = obj;
    //output<< basebus;
    output << "Number of Doors: " << obj.door<< endl;
    output << "model: " << obj.model << endl;
    output << "VIN Code: " << obj.vinCode << endl;
    return output;
}
bool Car::operator==(const Car& other) const {
    return (door == other.door) &&  (vinCode == other.vinCode)&& (model == other.model);
}
void Car::input() {
   // BaseBusCar::input();
    cout << "Enter Number of Doors: ";
    cin >> door;
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter VIN Code: ";
    cin >> vinCode;
}
void Car::output() {
  //  BaseBusCar::output();
    cout << "door: " << door << endl;
    cout << "model: " << model << endl;
    cout << "vin code: " << vinCode << endl;
}
//int Car::getId() { return BaseBusCar::getId(); }
