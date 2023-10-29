#include "Car.h"
#include "BaseBusCar.h"

Car::Car() {
    //id = 0; year = 0; price = 0; rNumber = 0; places = 0; 
    door = 0;
  //  model = ""; 
    vinCode = "";
}
Car::Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode)
{
   /* this->id = id;
    this->year = year;
    this->price = price;
    this->rNumber = rNumber;
    this->places = places;*/
    this->door = door;
   // this->model = model;
    this->vinCode = vinCode;

}
Car::Car(const Car& other)
{
   /* this->id = other.id;
    this->year = other.year;
    this->price = other.price;
    this->rNumber = other.rNumber;
    this->places = other.places;*/
    this->door = other.door;
    /*this->model = other.model;*/
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