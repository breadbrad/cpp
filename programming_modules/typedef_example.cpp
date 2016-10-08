typedef const double *(*p_fun) (const double *, int); // p_fun now a type name
p_fun p1 = f1; // p1 points to the f1() function

p_fun pa[3] = {f1, f2, f3}; // pa an array of 3 function pointers 
p_fun (*pd)[3] = &pa; // pd points to an array of 3 funciton pointers 



