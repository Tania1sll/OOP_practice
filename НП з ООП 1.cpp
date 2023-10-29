#include <iostream>
#include "Car.h"
#include "Bus.h"
using namespace std;
int main() {
	Car object1, object2;
	cin >> object1 >> object2;
	cout << "   " << endl;
	cout << object1<<endl;
	cout << object2<<endl;

	if (object1 == object2)
		cout << "object1==object2"<<endl;
	else 
		cout << "object1 != object2" << endl;

	Bus bus1, bus2;
	cin >> bus1 >> bus2;
	cout << "   " << endl;
	cout << bus1 << endl;
	cout << bus2 << endl;

	if (bus1 == bus2)
		cout << "bus1==bus2" << endl;
	else
		cout << "bus1 != bus2" << endl;
}

