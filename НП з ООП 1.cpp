#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Vector.h"
#include <vector>
#include <algorithm>
#include <list>
#include <ctime>
#include <map>
using namespace std;
//int main() {
//
//        Vector<int> obg1;
//        int b = 0;
//        int size = 13;
//        cout << "\n\t\t\tFiling an Integer array\n";
//        for (int i = 0; i < size; i++)
//        {
//            cout << "Enter Integer array: ";
//            cin >> b;
//            obg1.push_back(b);
//        }
//        Vector<double> obg2;
//        double g = 0;
//        size = 6;
//        cout << "\n\t\t\tFiling an  Decimal array\n";
//        for (int i = 0; i < size; i++)
//        {
//            cout << "Enter Decimal array: ";
//            cin >> g;
//            obg2.push_back(g);
//        }
//        Vector<char> obg3;
//        char a = 0;
//        size = 5;
//        cout << "\n\t\t\tFiling an char array\n";
//        for (int i = 0; i < size; i++)
//        {
//            cout << "Enter char: ";
//            cin >> a;
//            obg3.push_back(a);
//        }
//        cout << "\n\t\t\tInteger array\n";
//        for (int i = 0; i < obg1.getSize(); i++)
//            cout << obg1[i] << " ";
//        cout << "\nDelete an element in integer array\n";
//        obg1.pop_back();
//        cout << "\n\t\t\tInteger array\n";
//        for (int i = 0; i < obg1.getSize(); i++)
//            cout << obg1[i] << " ";
//        cout << "\n\t\t\tDecimal array\n";
//        for (int i = 0; i < obg2.getSize(); i++)
//            cout << obg2[i] << " ";
//        cout << "\n\t\t\tChar array\n";
//        for (int i = 0; i < obg3.getSize(); i++)
//            cout << obg3[i];
//        cout << endl;
//
//        Car car1(12354, 2025, 3651, 1354, 12, 2, "5D564D6", "FE56F4E6");
//        Car car2(32454, 2021, 3641, 1654, 5, 4, "5f45f4", "f56f5");
//        Vector<Car*> vectorCar;
//        vectorCar.push_back(&car1);
//        vectorCar.push_back(&car2);
//        for (int i = 0; i < vectorCar.getSize(); i++)
//            cout << *vectorCar[i] << endl;
//
//        Bus bus1(35523, 2021, 2354, 1211, 2, "No");
//        Bus bus2(2646, 1999, 2346, 321, 6, "Yes");
//        Bus bus3(4454, 1985, 35451, 313, 4, "Yes");
//        Vector<Bus*> vectorBus;
//        vectorBus.push_back(&bus1);
//        vectorBus.push_back(&bus2);
//        vectorBus.push_back(&bus3);
//        for (int i = 0; i < vectorBus.getSize(); i++)
//            cout << *vectorBus[i] << endl;
//
//        return 0;
//}
void input(map<int, BaseBusCar*>&baseMap, BaseBusCar&base){
    base.input();
    baseMap[base.getId()] = &base;
    cout << endl;
}
int main() {
    srand(time(nullptr));
    list<int>list1;
    for (int i = 0; i < 10; i++) {
        int randomNumber = (rand() % 10) * 2 + 1;
        list1.push_back(randomNumber);
    }
    cout << "List one: ";
    for (auto item = list1.begin(); item != list1.end(); ++item) {
        cout << *item << " ";
    }
    cout << endl;
    list<int>list2;
    for (int i = 0; i < 10; i++) {
        int randomNumber = (rand() % 10) * 2;
        list2.push_back(randomNumber);
    }
    cout << "List two: ";
    for (auto item = list2.begin(); item != list2.end(); ++item) {
        cout << *item << " ";
    }
    cout << endl;

    list<int>list3;
    cout << "List three: ";
    list1.sort();
    list2.sort();
    merge(list1.begin(), list1.end(), list2.begin(), list2.end(), inserter(list3, list3.end()));

    for (const int& item : list3) {
        cout << item << " ";
    }
    cout << endl;

    map<int, BaseBusCar*> baseBusCar;
        Car car, car1;
        Bus bus, bus1;
        int choice;
        do {
            cout << endl;
            cout << "Enter 1 to insert data`s;\nEnter 2 to print data`s\nExit-3\n\tYour choice:";
            cin >> choice;
            cout << endl;
            switch (choice)
            {
        case 1:
            cout << "\t\t\t Car one\n";
            input(baseBusCar, car);
            cout << "\t\t\t Car two\n";
            input(baseBusCar, car1);
            cout << "\t\t\t Bus one\n";
            input(baseBusCar, bus);
            cout << "\t\t\t Bus two\n";
            input(baseBusCar, bus1);
            break;
        case 2:
            int id;
            cout << "Enter object`s id: ";
            cin >> id;
            if (baseBusCar.find(id) != baseBusCar.end()) {
                baseBusCar[id]->output();
            }
            else {
                cout << "There`s no object with id " << id << endl;
            }
            break;
        case 3: break;
        }

    } while (choice != 3);

    return 0;
}
    /*vector<int> numbers1(10);

    int num;
    cout << "\t\t\tVector one\n";
    for (int i = 0; i < numbers1.size(); i++)
    {
        num = rand() % 10;
        if (num % 2 == 0 && num != 0)
        {
            numbers1[i] = num;
            cout << numbers1[i] << " ";
        }
        else
            --i;
    }

    cout << "\n\t\t\tVector two\n";
    vector<int> numbers2(10);
    vector<int>::iterator it = numbers2.begin();

    while (it != numbers2.end())
    {
        num = rand() % 10;
        if (num % 2 > 0)
        {
            *it = num;
            cout << *it << " ";
            ++it;
        }
    }
    cout << endl;

    sort(numbers1.begin(), numbers1.end());
    sort(numbers2.begin(), numbers2.end());

    cout << "\n\t\t\tVector three\n";
    vector<int> numbers3(numbers1.size() + numbers2.size());
    merge(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end(), numbers3.begin());

    for (int i = 0; i < numbers3.size(); i++)
        cout << numbers3[i] << "";

    vector<BaseBusCar*> engine;
    int choice;
    do {
        cout << endl;
        cout << "\t\t\t1.Add a car" << endl;
        cout << "\t\t\t2.Add a bus" << endl;
        cout << "\t\t\t 3.Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        BaseBusCar* newBase = nullptr;

        switch (choice)
        {
        case 1:
            newBase = new Car();
            cin >> *(Car*)newBase;
            break;
        case 2:
            newBase = new Bus();
            cin >> *(Bus*)newBase;
            break;
        case 3:
            cout << "\t\t\tthe end\n";
            break;
        default:
            cout << "There is no such choice";
            break;
        }
        if (newBase) {
            engine.push_back(newBase);
        }
    } while (choice != 3);

    vector<BaseBusCar*> busVector(engine);
    for (int i = 0; i < engine.size(); i++) {
        if (dynamic_cast<Car*>(engine[i])) {
            engine.erase(engine.begin() + i);
        }
    }

    for (int i = 0; i < busVector.size(); i++) {
        if (dynamic_cast<Bus*>(busVector[i])) {
            busVector.erase(busVector.begin() + i);
        }
    }
    cout << endl << "objects of the first vector: " << endl;
    for (BaseBusCar* it : engine) {
        cout << *it;
        cout << endl;
    }
    cout << endl << "objects of the second vector:" << endl;
    for (BaseBusCar* it2 : busVector) {
        cout << *it2;
    }
    cout << endl << endl;
}*/


