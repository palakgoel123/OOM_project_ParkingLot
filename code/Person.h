#ifndef __Person
#define __Person
#include<string>
using namespace std;
namespace example
{
    class person
    {
    private:
        string name;
        long long mob;
        string license_plate;
        int type;
        long long id;
        static int counter;

    public:
        void get();
        void show();
        int get_type();
    };
}
#endif
