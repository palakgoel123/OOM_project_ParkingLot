#include<bits/stdc++.h>
#include "MotorbikeSpot.h"
using namespace std;

namespace example{
    int MotorbikeSpot::MotorbikeSlot = 0;

    bool MotorbikeSpot::isFull(){
        if(MotorbikeSlot>=10){
            return true;
        }

        return false;
    }
}
