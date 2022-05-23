#ifndef __admin
#define __admin
#include<string>
#include "Account.h"
#include "ParkingRate.h"
namespace example
{
   class admin: public account, public ParkingRate
   {
      public:
         void update_price();
         void show_admin();
   };
}
#endif
