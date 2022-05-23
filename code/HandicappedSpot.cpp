#include<bits/stdc++.h>
#include "HandicappedSpot.h"
using namespace std;

namespace example{
    int HandicappedSpot::HandicapSlot = 0;

    bool HandicappedSpot::isFull(){
        if(HandicapSlot>=10){
            return true;
        }

        return false;
    }
}
