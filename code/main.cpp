#include <bits/stdc++.h>
#include "Account.h"
#include "ParkingFloor.h"
#include "Person.h"
#include "HandicappedSpot.h"
#include "LargeSpot.h"
#include "MotorbikeSpot.h"
#include "ElectricSpot.h"
#include "ParkingDisplayBoard.h"
#include "ParkingAttendant.h"
#include "Exit.h"
#include "admin.h"
#include "ParkingRate.h"
using namespace std;
using namespace example;

int main()
{
    int ch, r;
    char ans, a, ans1, ans2;
    string password, username;
    person per;
    admin ad;
    account acc;
    Exit e;
    parking_attendant p;
    ParkingFloor f;
    ParkingDisplayBoard dis;
    ParkingRate rate;
    do
    {
        system("clear");
        cout << "\n*********************************** CAR PARKING MANAGEMENT ***********************************\n";
        cout << "1.Admin mode";
        cout << "\n2.Parking attendant mode";
        cout << "\n************************************ Choose your identity ************************************\n";
        cin >> ch;
        switch (ch)
        {
            case 1:
                system("clear");
                cout << "\n****************************************** Admin mode ******************************************\n";
                cout << "Enter username : ";
                cin >> username;
                cout << "Enter password : ";
                cin >> password;
                if ((acc.ret_admin().compare(password)) == 0)
                {
                    int choice;
                    do
                    {
                        cout << "1.Show all record\n";
                        cout << "2.Update Price for floors\n";
                        cout << "3.Exit\n";
                        cin >> choice;
                        switch (choice)
                        {
                        case 1:
                            ad.show_admin();
                            break;
                        case 2:
                            ad.update_price();
                            break;
                        case 3:
                            exit(0);
                            break;
                        default:
                            cout << "Wrong value entered\n";
                        }
                        cout << "\nDo you wish to continue(y:n)? ";
                        cin >> ans1;
                    } while (ans1 == 'y');
                }
                else
                    cout << "Incorrect password\n";
                break;
            case 2:
                cout << "Enter username : ";
                cin >> username;
                cout << "Enter password : ";
                cin >> password;
                if ((acc.ret_attendant().compare(password)) == 0)
                {
                    int choice;
                    do
                    {
                        system("clear");
                        cout << "\n************************************ Parking attendant mode ************************************\n";
                        cout << "1.Add car record\n";
                        cout << "2.Display Empty Slots of all floors\n";
                        cout << "3.Display Rates of Differnt Floors\n";
                        cout << "4.Get the ticket at the entrance\n";
                        cout << "5.Make Payment and Show Ticket at the exit\n";
                        cout << "6.Exit";
                        "\n**********************************************************************************************\n";
                        int c;
                        cin >> c;
                        switch (c)
                        {
                        case 1:
                            per.get();
                            break;
                        case 2:
                            dis.showEmptySpotNumber();
                            break;
                        case 3:
                            rate.show_rate();
                            break;
                        case 4:
                            f.bookSlot(per);
                            f.assignVehicleToSlot();
                            p.processTicket(per);
                            break;
                        case 5:
                            e.print_ticket();
                            f.freeSlot();
                            break;
                        case 6:
                            exit(0);
                            break;
                        default:
                            cout << "Wrong value entered\n";
                        }
                        cout << "\nDo you wish to continue in Parking Attendant Mode(y:n)? ";
                        cin >> ans2;
                    } while (ans2 == 'y');
                }
                else
                    cout << "Incorrect password\n";
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Wrong value entered\n";
        }
        cout << "\nDo you wish to continue(y:n)? ";
        cin >> ans;
    } while (ans == 'y');
    return 0;
}
