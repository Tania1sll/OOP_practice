#include "Car.h"
//#include "BaseBusCar.h"

Car::Car() {
    door = 0;
    model = "";
    vinCode = "";
    id=0;
    year=0;
    price=0;
    places=0;
    rNumber=0;
}
Car::Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode):
    id(id), year(year), price(price), rNumber(rNumber), places(places), door(door), model(model), vinCode(vinCode)
{

}
int Car::getId() const
{
    return id;
}
int Car::getYear() const
{
    return year;
}

int Car::getPrice() const
{
    return price;
}

int Car::getRNumber() const
{
    return rNumber;
}

int Car::getPlaces() const
{
    return places;
}

int Car::getDoor() const
{
    return door;
}
string Car::getModel() const
{
    return model;
}

string Car::getVinCode() const
{
    return vinCode;
}

Car::Car(const Car& other)
{
    this->id=other.id;
    this->year=other.year;
    this->price=other.price;
    this->places=other.places;
    this->rNumber=other.rNumber;
    this->door = other.door;
    this->vinCode = other.vinCode;
    this->model = other.model;
}
Car::~Car()
{

}


//std::istream& operator>>(std::istream& input, Car& obj) {
//   // BaseBusCar& basebus = obj;
//  //  input >> basebus;
//    cout << "Enter Number of Doors: " << endl;
//    input >> obj.door;
//    cout << "Enter model: " << endl;
//    input >> obj.model;
//    cout << "Enter VIN Code: " << endl;
//    input >> obj.vinCode;
//    return input;

//}
//std::ostream& operator<<(std::ostream& output, Car& obj)
//{
//   // BaseBusCar& basebus = obj;
//    //output<< basebus;
//    output << "Number of Doors: " << obj.door<< endl;
//    output << "model: " << obj.model << endl;
//    output << "VIN Code: " << obj.vinCode << endl;
//    return output;
//}
//bool Car::operator==(const Car& other) const {
//    return (door == other.door) &&  (vinCode == other.vinCode)&& (model == other.model);
//}
void Car::input() {
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
   // BaseBusCar::input();
    cout << "Enter Number of Doors: ";
    cin >> door;
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter VIN Code: ";
    cin >> vinCode;
}
void Car::output() {
    cout << "id: " << id << endl;
    cout << "year: " << year<< endl;
    cout << "Enter Price: " << price << endl;
    cout << "Enter rNumber: " << rNumber << endl;
    cout << "Enter Number of Places: " << places << endl;
  //  BaseBusCar::output();
    cout << "door: " << door << endl;
    cout << "model: " << model << endl;
    cout << "vin code: " << vinCode << endl;
}
//int Car::getId() { return BaseBusCar::getId(); }
