#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Vector.h"
using namespace std;
int main() {

        Vector<int> obg1;
        int b = 0;
        int size = 13;
        cout << "\n\t\t\tFiling an Integer array\n";
        for (int i = 0; i < size; i++)
        {
            cout << "Enter Integer array: ";
            cin >> b;
            obg1.push_back(b);
        }
        Vector<double> obg2;
        double g = 0;
        size = 6;
        cout << "\n\t\t\tFiling an  Decimal array\n";
        for (int i = 0; i < size; i++)
        {
            cout << "Enter Decimal array: ";
            cin >> g;
            obg2.push_back(g);
        }
        Vector<char> obg3;
        char a = 0;
        size = 5;
        cout << "\n\t\t\tFiling an char array\n";
        for (int i = 0; i < size; i++)
        {
            cout << "Enter char: ";
            cin >> a;
            obg3.push_back(a);
        }
        cout << "\n\t\t\tInteger array\n";
        for (int i = 0; i < obg1.getSize(); i++)
            cout << obg1[i] << " ";
        cout << "\nDelete an element in integer array\n";
        obg1.pop_back();
        cout << "\n\t\t\tInteger array\n";
        for (int i = 0; i < obg1.getSize(); i++)
            cout << obg1[i] << " ";
        cout << "\n\t\t\tDecimal array\n";
        for (int i = 0; i < obg2.getSize(); i++)
            cout << obg2[i] << " ";
        cout << "\n\t\t\tChar array\n";
        for (int i = 0; i < obg3.getSize(); i++)
            cout << obg3[i];
        cout << endl;

        Car car1(12354, 2025, 3651, 1354, 12, 2, "5D564D6", "FE56F4E6");
        Car car2(32454, 2021, 3641, 1654, 5, 4, "5f45f4", "f56f5");
        Vector<Car*> vectorCar;
        vectorCar.push_back(&car1);
        vectorCar.push_back(&car2);
        for (int i = 0; i < vectorCar.getSize(); i++)
            cout << *vectorCar[i] << endl;

        Bus bus1(35523, 2021, 2354, 1211, 2, "No");
        Bus bus2(2646, 1999, 2346, 321, 6, "Yes");
        Bus bus3(4454, 1985, 35451, 313, 4, "Yes");
        Vector<Bus*> vectorBus;
        vectorBus.push_back(&bus1);
        vectorBus.push_back(&bus2);
        vectorBus.push_back(&bus3);
        for (int i = 0; i < vectorBus.getSize(); i++)
            cout << *vectorBus[i] << endl;

        return 0;
}
//практична 5
//BaseBusCar* baseBusCar[2];
    //	int choice;
    //	for (int i = 0; i < 2; i++) {
    //		cout << "Create:\n 1)Car \n 2)Bus\n Your choice: " << endl;
    //		cin >> choice;
    //		if (choice == 1) {
    //			baseBusCar[i] = new Car();
    //		}
    //		else if (choice == 2) {
    //			baseBusCar[i] = new Bus();
    //		}
    //		else {
    //			cout << "Wrong number. Try again!" << endl;
    //			i--;
    //		}
    //		baseBusCar[i]->input();
    //	}
    //	for (int i = 0; i < 2; i++) {
    //		cout << "--------------------------------------------" << endl;
    //		baseBusCar[i]->output();
    //  }