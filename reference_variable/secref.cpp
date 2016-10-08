#include <iostream>
int main()
{
        using namespace std;
        int rats = 101;
        int & rodents = rats;   // rodents is a reference

        cout << "rats = " << rats;
        cout << ", rodents = " << rodents << endl;

        cout << "rats address = " << &rats;
        cout << ", rodents address = " << &rodents << endl;

        int bunnies = 50;
        rodents = bunnies;      // Is it possible to change the reference? 
        cout << "bunnies = " << bunnies;
        cout << ", rats = " << rats;
        cout << ", rodents = " << rodents << endl;

        cout << "bunnies addresss = " << &bunnies;
        cout << ", rodents address = " << &rodents << endl;
        return 0;
}

