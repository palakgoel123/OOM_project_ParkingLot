#ifndef __Parking_attendant
#define __Parking_attendant
#include "Person.h"
#include "Account.h"
#include <string>
using namespace std;
namespace example
{
    class parking_attendant:public account
    {
        string ticket_no;
        public:
            void processTicket(person);
    };
}
#endif
