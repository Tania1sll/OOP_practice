#pragma once
#include <iostream>
using namespace std;
class BaseBusCar
{
	int id, year, price, rNumber, places;
	string model;
public:
	friend istream& operator>>(std::istream& input, BaseBusCar& obj);
	friend ostream& operator<<(std::ostream& output, BaseBusCar& obj);
};