struct antartica_years_end
{
        int year;
}

antartica_years_end s01, s02, s03; // s01, s02, s03 are structures

s01.year = 1998;

antartica_years_end * pa = &s02;

pa->year = 1998;

antartica_years_end trio[3];  // array of 3 structures 

trio[0].year = 2003; // trio[0] is a structure 

(trio+1).year = 2004; // same as trio[1].year = 2004;



// creating an array of pointers

const antarctica_years_end* arp[3] = {&s01, &s02, &s03};

// indirect membership operator 
std::cout << arp[1]->year << std::endl;

const antartica_years_end ** ppa = arp;

// arp = the name of an array  (the address of its first element (pointer))

auto ppb = arp; // c++11 automatic type deduction 

// ppa -> double pointer 
// it can be used with the indirect membership operator 
std::cout << (*ppa)->year << std::endl; // *ppa = &s01
std::cout << (*(ppb+1))->year << std::endl; // ppb+1 = arp[1] = &s02






