#include <iostream>
#include "Car.h"
#include "Bus.h"
using namespace std;
int main() {
	BaseBusCar* baseBusCar[2];
		int choice;
		for (int i = 0; i < 2; i++) {
			cout << "Create:\n 1)Car \n 2)Bus\n Your choice: " << endl;
			cin >> choice;
			if (choice == 1) {
				baseBusCar[i] = new Car();
			}
			else if (choice == 2) {
				baseBusCar[i] = new Bus();
			}
			else {
				cout << "Wrong number. Try again!" << endl;
				i--;
			}
			baseBusCar[i]->input();
		}
		for (int i = 0; i < 2; i++) {
			cout << "--------------------------------------------" << endl;
			baseBusCar[i]->output();
	    }
	return 0;
}