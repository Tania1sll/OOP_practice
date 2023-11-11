#pragma once
#include <iostream>
#include "BaseBusCar.h"
using namespace std;

class Car : public BaseBusCar
{
    int door;
	string vinCode;
	string model;
//    int id, year, price, rNumber, places;

public:
    Car();
    Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode);
	Car(const Car&);
	friend istream& operator>>(std::istream& input, Car& obj);
	friend ostream& operator<<(std::ostream& output, Car& obj);
	bool operator==(const Car& other) const;
    void input() override;
    void output() override;
    ~Car();
    int getId() override;
    int getYear() override;
    int getPrice() override;
    int getRNumber() override;
    int getPlaces() override;
    int getDoor();
    string getModel();
    string getVinCode();
};
