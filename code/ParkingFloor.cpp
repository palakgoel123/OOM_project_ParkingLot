#include<bits/stdc++.h>
#include "ParkingFloor.h"
#include "Person.h"
#include "HandicappedSpot.h"
#include "LargeSpot.h"
#include "MotorbikeSpot.h"
#include "ElectricSpot.h"
using namespace std;

namespace example
{
    void ParkingFloor::bookSlot(person customer)
    {
        this->customer = customer;
        int type = customer.get_type();
        if(type == 1)
        {
            MotorbikeSpot::MotorbikeSlot++;
        }
        else if(type == 2)
        {
            LargeSpot::LargeSlot++;
        }
        else if(type == 3)
        {
            ElectricSpot::ElectricSlot++;
        }
        else if(type == 4)
        {
            HandicappedSpot::HandicapSlot++;
        }
    }
    void ParkingFloor::assignVehicleToSlot()
    {
        cout<<"Slot has been assigned to your vehicle."<<"\n";
    }
    void ParkingFloor::freeSlot()
    {
        int type = customer.get_type();
        if(type == 1)
        {
            MotorbikeSpot::MotorbikeSlot--;
        }
        else if(type == 2)
        {
            LargeSpot::LargeSlot--;
        }
        else if(type == 3)
        {
            ElectricSpot::ElectricSlot--;
        }
        else if(type == 4)
        {
            HandicappedSpot::HandicapSlot--;
        }
    }

}
