// НП з ООП 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
using namespace std;

Car::Car() {
    id = 0; year = 0; price = 0; rNumber = 0; places = 0; door = 0; model = ""; vinCode = "";
}
Car::Car(int id, int year,int price, int rNumber, int places, int door, string model, string vinCode)
{
    this->id = id;
    this->year = year;
    this->price = price;
    this->rNumber = rNumber;
    this->places = places;
    this->door = door;
    this->model = model;
    this->vinCode =vinCode;


}
Car::Car(const Car& other)
{
    this->id = other.id;
    this->year = other.year;
    this->price = other.price;
    this->rNumber = other.rNumber;
    this->places = other.places;
    this->door = other.door;
    this->model = other.model;
    this->vinCode = other.vinCode;
}
Car::~Car()
{
  
  
}