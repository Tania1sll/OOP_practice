#pragma once
#include <iostream>
using namespace std;

class Car
{
	int id, year, price, rNumber, places, door;
	string model, vinCode;
public:
	Car();
	Car(int, int, int, int, int, int, string, string);
	Car(const Car&);
	friend istream& operator>>(istream& cin, Car& car);
	friend ostream& operator<<(ostream& out, const Car& car);
	bool operator==(const Car& other) const;
	~Car();
	
};