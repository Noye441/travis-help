// S. Trowbridge 2024
#include <iostream>

int* f1()                       // return a pointer to an automatic variable
{                 
    int *i, n=10;               // note: i is a pointer, n is an integer            
    i = &n;                     
    return i;                   // return a pointer
}

int* f2()                       // return a pointer to a dynamic variable which lives until explicitly deleted
{
    int *i = new int(100);      
    return i;                   // return a pointer
}

int main() 
{
    std::cout << std::endl;

    int *p = f1();              // what is the problem?
    std::cout << *p << "\n";    

    int *q = new int{10};
    q = f2();                   // what is the problem?

    delete q;

    std::cout << std::endl;
    return 0;
}
