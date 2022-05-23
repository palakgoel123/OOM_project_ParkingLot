#ifndef __ParkingDisplayBoard
#define __ParkingDisplayBoard
#include "HandicappedSpot.h"
#include "LargeSpot.h"
#include "MotorbikeSpot.h"
#include "ElectricSpot.h"


namespace example{
    class ParkingDisplayBoard :public HandicappedSpot, public ElectricSpot, public MotorbikeSpot, public LargeSpot
    {
    private:
        long long int id;
        HandicappedSpot handicappedFreeSpot;
        LargeSpot largeFreeSpot;
        MotorbikeSpot motorbikeFreeSpot;
        ElectricSpot electricFreeSpot;
        /* data */
    public:
        void showEmptySpotNumber();
    };
}


#endif
