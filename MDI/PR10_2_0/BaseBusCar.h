#pragma once
#include <iostream>
using namespace std;
class BaseBusCar
{
	int id, year, price, rNumber, places;
public:
    BaseBusCar();
    BaseBusCar(int id, int  year, int price, int rNumber, int places);
    BaseBusCar(const BaseBusCar& other);
    ~BaseBusCar();
//		id(id), year(year), price(price), rNumber(rNumber), places(places){}
    friend istream& operator>>(std::istream& input, BaseBusCar& obj);
    friend ostream& operator<<(std::ostream& output, BaseBusCar& obj);
	virtual void input();
	virtual void output();
    virtual int getId()const;
    virtual int getYear()const;
    virtual int getPrice()const;
    virtual int getRNumber()const;
    virtual int getPlaces()const;
};
