#ifndef __Account
#define __Account
#include "Person.h"
#include<string>
using namespace std;
namespace example
{
   class account
   {
      private:
         person p;
         string password1="admin";
         string password2="attendant";
      public:
         string ret_admin();
         string ret_attendant();
   };
#endif
