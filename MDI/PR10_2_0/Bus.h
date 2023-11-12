#pragma once
#include <iostream>
#include "BaseBusCar.h"
using namespace std;
 class Bus : public BaseBusCar
 {
     string placesInvalidity;
 public:
     Bus();
     Bus(int id, int year, int price, int rNumber, int places,string placesInvalidity);

//		 BaseBusCar(id, year, price, rNumber, places), placesInvalidity(placesInvalidity) {}
	 Bus(const Bus&);
	 friend istream& operator>>(std::istream& input, Bus& obj);
	 friend ostream& operator<<(std::ostream& output, Bus& obj);
	 bool operator==(const Bus& bus) const;
	  void input() override;
	  void output()override;
      ~Bus();
//      int getId() const;
//      int getYear() const;
//      int getPrice() const;
//      int getRNumber() const;
//      int getPlaces() const;
      string getPlacesInvalidity() const;
 };


