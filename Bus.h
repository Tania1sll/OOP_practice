#pragma once
#include <iostream>
#include "Bus.h"
#include "BaseBusCar.h"
using namespace std;
 class Bus : public BaseBusCar
 {
	 bool placesInvalidity;
 public:
	 friend istream& operator>>(std::istream& input, Bus& obj);
	 friend ostream& operator<<(std::ostream& output, Bus& obj);
	 bool operator==(const Bus& bus) const;
	  void input() override;
	  void output()override;
 };


