// НП з ООП 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Car.h"
using namespace std;
int main() {
	Car object1, object2, object3;
	cin >> object1 >> object2 >> object3;
	cout << "   " << endl;
	cout << object1<<endl;
	cout << object2<<endl;
	cout << object3<<endl;

	if (object1 == object2)
		cout << "object1==object2"<<endl;
	else 
		cout << "object1 != object2" << endl;

	if (object1 == object3)
		cout << "object1==object3" << endl;
	else
		cout << "object1 != object3" << endl;

	if (object2 == object3)
		cout << "object2==object3" << endl;
	else
		cout << "object2 != object3" << endl;

}