#pragma once
#include <iostream>
#include "Bus.h"
#include "BaseBusCar.h"
using namespace std;
 class Bus : public BaseBusCar
 {
	 bool placesInvalidity;
 public:
	void Show () override {
		cout << "Bus class\n";
	 }
	 friend istream& operator>>(std::istream& input, Bus& obj);
	 friend ostream& operator<<(std::ostream& output, Bus& obj);
	 bool operator==(const Bus& bus) const;
 };


