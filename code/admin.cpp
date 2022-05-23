#include<bits/stdc++.h>
#include "admin.h"
#include "ParkingRate.h"
#include "Person.h"
#include "Account.h"
using namespace std;
namespace example
{
    void admin::show_admin()
    {
        person p.show();
    }
    void admin::update_price()
    {
        int type_admin;
        double price;
        cout<<"Enter the type of vehicle whose price is to be updated : ";
        cin>>type_admin;
        cout<<"Enter the new price : ";
        cin>>price;
        if(type_admin==1)
            ParkingRate::motorbike_rate=price;
        else if(type_admin==2)
            ParkingRate::large_rate=price;
        else if(type_admin==3)
            ParkingRate::electric_rate=price;
        else
            ParkingRate::handicapped_rate=price;
    }
}
