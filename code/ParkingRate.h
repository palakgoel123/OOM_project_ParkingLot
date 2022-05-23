#ifndef __PARKINGRATE
#define __PARKINGRATE

#include<string>
#include "Person.h"
using namespace std;

namespace example
{
    class ParkingRate
    {
        private:
            int type_of_payment;
            int card_number;
            int pin;
        protected:
            static double handicapped_rate;
            static double large_rate;
            static double motorbike_rate;
            static double electric_rate;

        public:
            double calculate_rate(person);
            void payment_option();
            void show_rate();
    };
}
#endif
