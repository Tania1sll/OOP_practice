#pragma once
#include <iostream>
#include "Bus.h"
#include "BaseBusCar.h"
using namespace std;
 class Bus : public BaseBusCar
 {
	 bool placesInvalidity;
 public:
	 int getId();
	 Bus();
	 Bus(int id, int year, int price, int rNumber, int places, bool placesInvalidity):
		 BaseBusCar(id, year, price, rNumber, places), placesInvalidity(placesInvalidity) {}
	 Bus(const Bus&);
	 friend istream& operator>>(std::istream& input, Bus& obj);
	 friend ostream& operator<<(std::ostream& output, Bus& obj);
	 bool operator==(const Bus& bus) const;
	  void input() override;
	  void output()override;
	  ~Bus();
 };


