#include <iostream>
const double * f1 (const double ar[], int n);
const double * f2 (const double [], int);
const double * f3 (const double *, int);

int main()
{
        using namespace std;
        double av[3] = {1112.3, 1542.6, 2227.9};

        // pointer to a function
        const double *(*p1)(const double *, int) = f1;
        auto p2 = f2; 
        cout << "Using pointers to functions:\n";
        cout << " Address Value\n";
        cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
        cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

        // auto doens't work with list initialization 
        const double *(*pa[3])(const double *, int) = {f1, f2, f3};
        // pb a pointer to first element of pa 
        auto pb = pa;
        cout << "\nUsing an array of pointers to functions:\n";
        cout << " Address Value\n";
        for (int i = 0; i < 3; i++)
                cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;

        cout << "\nUsing a pointer to a pointer to a function:\n";
        cout << " Address Value\n";
        for (int i = 0; i < 3; i++)
                cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

        // pointer to an array of function pointers 
        cout << "\nUsing pointers to an array of pointers:\n";
        cout << " Address Value\n";
        
        // easy way
        auto pc = &pa;
        cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av, 3) << endl;

        // hard way
        // *pd is the array 
        // (*pd)[i] is an array element (a pointer to a function)
        // *(*pd)[i](av, 3) is the value that the returned pointer points to
        // *(*(*pd)[i])(av,3) is the pointed-to double value 
        const double *(*(*pd)[3])(const double *, int) = &pa;

        // store return value in pdb
        const double * pdb = (*pd)[1](av,3);
        cout << pdb << ": " << *pdb << endl;
        // alternatvie notation
        cout <<(*(*pd)[2])(av, 30) << ": " << *(*(*pd)[2])(av,3) << endl;
        // cin.get();
        return 0;
}

const double * f1 (const double * ar, int n)
{
        return ar;
}

const double * f2 (const double ar[], int n)
{
        return ar+1;
}

const double * f3 (const double ar[], int n)
{
        return ar+2;
}

