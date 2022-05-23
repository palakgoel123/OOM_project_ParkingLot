#ifndef PARKINGRATE_CPP_INCLUDED
#define PARKINGRATE_CPP_INCLUDED

#include <bits/stdc++.h>
#include "Person.h"
#include "ParkingRate.h"
using namespace std;

namespace example
{
    double ParkingRate::handicapped_rate = 50;
    double ParkingRate::large_rate = 200;
    double ParkingRate::motorbike_rate = 150;
    double ParkingRate::electric_rate = 100;
    double ParkingRate::calculate_rate(person p)
    {
        int type = p.get_type();
        if (type == 1)
        {
            return motorbike_rate;
        }
        else if (type == 2)
        {
            return large_rate;
        }
        else if (type == 3)
        {
            return electric_rate;
        }
        else if (type == 4)
        {
            return handicapped_rate;
        }
    }
    void ParkingRate::payment_option()
    {
        cout << "Pay through : \n 1)Cash\n 2)Card" << endl;
        cin >> type_of_payment;
        if (type_of_payment == 1)
        {
            cout << "Payment through cash is successful" << endl;
        }
        else
        {
            cout << "Enter card number :";
            cin >> card_number;
            cout << endl;
            cout << "Enter PIN : ";
            cin >> pin;
            cout << "Payment through card is successful" << endl;
        }
    }
    void ParkingRate::show_rate()
    {
        cout << "Handicapped Rate: " << handicapped_rate << "\n";
        cout << "Large Vehicle Rate: " << large_rate << "\n";
        cout << "Electric Vehicle Rate: " << electric_rate << "\n";
        cout << "Moterbike Rate: " << motorbike_rate << "\n";
    }
}

#endif
