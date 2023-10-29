#pragma once
#include <iostream>
#include "BaseBusCar.h"
using namespace std;

class Car : public BaseBusCar
{
	int door;
	string vinCode;
public:
	Car();
	Car(int id, int year, int price, int rNumber, int places, int door, string model, string vinCode);
	Car(const Car&);
	friend istream& operator>>(std::istream& input, Car& obj);
	friend ostream& operator<<(std::ostream& output, Car& obj);
	bool operator==(const Car& other) const;
	~Car();
	
};