#include <iostream>
#include <cstring> // or string.h

using namespace std;
char * getname(void); // function prototype
int main ()
{
        char * name; // create pointer but no storage

        name = getname();
        cout << name << " at " << (int*) name << "\n";
        delete [] name;  // memory freed 

        name= getname();        // reuse freed memory
        cout << name << " at " << (int*) name << "\n";
        delete [] name;
        return 0;
}

char * getname() // return pointer to new string
{
        char temp[80];
        cout << "Enter last name: ";
        cin >> temp;
        char* pn = new char[strlen(temp) + 1]; // +1 -> includes null character
        strcpy(pn, temp);       // copy string into smaller space
        return pn; // returns the address of the copy 
}

