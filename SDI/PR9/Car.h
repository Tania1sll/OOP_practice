#pragma once
#include <iostream>
using namespace std;

class Car
{
	int door;
	string vinCode;
	string model;
    int id, year, price, rNumber, places;

public:
    Car();
    Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode);
    //BaseBusCar( id,  year,  price,  rNumber,  places), door(door), vinCode(vinCode){}
	Car(const Car&);
	friend istream& operator>>(std::istream& input, Car& obj);
	friend ostream& operator<<(std::ostream& output, Car& obj);
	bool operator==(const Car& other) const;
    void input() ;
    void output();
    ~Car();
    int getId() const;
    int getYear() const;
    int getPrice() const;
    int getRNumber() const;
    int getPlaces() const;
    int getDoor() const;
    string getModel() const;
    string getVinCode() const;
};
