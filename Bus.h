#pragma once
#include <iostream>
using namespace std;

class Bus
{
	int id, year, price, rNumber, places;
	string model;
	bool placesInvalidity;
public:
	Bus();
	Bus(int id, int year, int price, int rNumber, int places, string model, bool placesInvalidity);
	Bus(const Bus&);
	friend istream& operator>>(istream& cin, Bus& bus);
	friend ostream& operator<<(ostream& out, const	Bus& bus);
	bool operator==(const Bus& other) const;
	~Bus();

};
