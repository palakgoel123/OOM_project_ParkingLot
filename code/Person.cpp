#include<bits/stdc++.h>
#include "Person.h"
using namespace std;
namespace example
{
    int person::counter = 1;
    person::person()
    {
        id = counter++;
    }
    void person::get()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter mobile number: ";
        cin >> mob;
        cout << "Enter car number plate: ";
        cin >> license_plate;
        cout << "Enter type of vehicle ->\n1:Car/scooter\n2:Heavy vehicle(truck/bus)\n3:electric car\n4.Handicapped spot\n";
        cin >> type;
    }
    void person::show()
    {
        cout << "\nName :" << name;
        cout << "\nMobile no. :" << mob;
        cout << "\nVehicle license plate :" << license_plate;
        cout << "\nVehicle type :" << type;
        cout << "\n";
    }
    int person::get_type()
    {
        return type;
    }
}
