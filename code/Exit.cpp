#ifndef EXIT_CPP_INCLUDED
#define EXIT_CPP_INCLUDED

#include<bits/stdc++.h>
#include <ctime>
#include "ParkingRate.h"
#include "Exit.h"
using namespace std;

namespace example
{
    void Exit::process_payment(person p)
    {
        ParkingRate r;
        cost = r.calculate_rate(p);
    }
    void Exit::payment_method()
    {
        ParkingRate r;
        r.payment_option();
    }
    void Exit::print_ticket()
    {
        cout<<"*********************************************"<<endl;
        time_t now = time(0);
        char* dt = ctime(&now);
        cout<<"Total time : "<<dt<<endl;
        cout<<"Total cost : "<<cost<<endl;
        cout<<"**********************************************"<<endl;
        cout<<"Thank you for coming"<<endl;
    }
}

#endif // EXIT_CPP_INCLUDED
