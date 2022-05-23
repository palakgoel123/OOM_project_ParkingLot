#include<bits/stdc++.h>
#include<string>
#include "ElectricSpot.h"
using namespace std;
namespace example{
    int ElectricSpot::ElectricSlot = 0;

    bool ElectricSpot::isFull(){
        if(ElectricSlot>=10){
            return true;
        }

        return false;
    }
}
