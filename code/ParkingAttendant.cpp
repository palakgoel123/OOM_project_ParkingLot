#include<bits/stdc++.h>
#include <ctime>
#include "ParkingAttendant.h"
#include "Person.h"
using namespace std;
namespace example
{
    void parking_attendant::processTicket(person per)
    {
        cout<<"*************************** TICKET INFORMATION *********************************";
        per.show();
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "The local date and time is: "<<dt<< endl;
    }
}
