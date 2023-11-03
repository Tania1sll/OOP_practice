#pragma once
#include <iostream>
using namespace std;
class BaseBusCar
{
	int id, year, price, rNumber, places;
public:
	int getId() const;
	BaseBusCar(): id(0), year(0), price(0), rNumber(0), places(0) {}
	BaseBusCar(int id, int  year, int price, int rNumber, int places) : 
		id(id), year(year), price(price), rNumber(rNumber), places(places){}
	friend istream& operator>>(std::istream& input, BaseBusCar& obj);
	friend ostream& operator<<(std::ostream& output, BaseBusCar& obj);
	virtual void input();
	virtual void output();
};