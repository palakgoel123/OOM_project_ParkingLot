#ifndef __ParkingFloor
#define __ParkingFloor
#include<string>
#include "Person.h"
#include "HandicappedSpot.h"
#include "LargeSpot.h"
#include "MotorbikeSpot.h"
#include "ElectricSpot.h"
using namespace std;

namespace example
{
    class ParkingFloor: public HandicappedSpot, public ElectricSpot, public MotorbikeSpot, public LargeSpot
    {
        private:
            person customer;
        public:
            void bookSlot(person);
            void assignVehicleToSlot();
            void freeSlot();
    };
}
#endif
