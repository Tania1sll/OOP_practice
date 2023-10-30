#pragma once
#include <iostream>
using namespace std;
class BaseBusCar
{
	int id, year, price, rNumber, places, getName;
	string model;
public:
	virtual void Show() { cout << "Base class\n"; }
	friend istream& operator>>(std::istream& input, BaseBusCar& obj);
	friend ostream& operator<<(std::ostream& output, BaseBusCar& obj);
};