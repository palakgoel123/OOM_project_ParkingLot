#include<bits/stdc++.h>
using namespace std;
#include "ParkingDisplayBoard.h"
#include "HandicappedSpot.h"
#include "LargeSpot.h"
#include "MotorbikeSpot.h"
#include "ElectricSpot.h"

namespace example{
    void ParkingDisplayBoard::showEmptySpotNumber(){
        if(!handicappedFreeSpot.isFull()){
            cout<<"Free Handicapped: "<<(10- HandicappedSpot::HandicapSlot)<<endl;
        }
        else {
            cout<<"Handicapped is full"<<endl;
        }

        if(!largeFreeSpot.isFull()){
            cout<<"Free Large spot: "<<(10- LargeSpot::LargeSlot)<<endl;
        }
        else {
            cout<<"Large spot is full"<<endl;
        }

        if(!motorbikeFreeSpot.isFull()){
            cout<<"Free Motorbike Spot: "<<(10- MotorbikeSpot::MotorbikeSlot)<<endl;
        }
        else {
            cout<<"MotorbikeSpot is full"<<endl;
        }

        if(!electricFreeSpot.isFull()){
            cout<<"Free Electric Spot: "<<(10- ElectricSpot::ElectricSlot)<<endl;
        }
        else {
            cout<<"Electric Spot is full"<<endl;
        }
    }
}
