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
	~Car();

};