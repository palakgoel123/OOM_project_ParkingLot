#include<bits/stdc++.h>
#include "LargeSpot.h"
using namespace std;

namespace example{
    int LargeSpot::LargeSlot = 0;

    bool LargeSpot::isFull(){
        if(LargeSlot>=10){
            return true;
        }

        return false;
    }
}
