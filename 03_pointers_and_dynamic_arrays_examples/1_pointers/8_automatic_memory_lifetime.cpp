// S. Trowbridge 2024
#include <iostream>

int f1()                            // return a copy of an automatic variable
{
    int i = 100;
    return i;                       // return a copy of i
}

int& f2()                           // return a reference to an automatic variable
{                      
    int i = 10;
    return i;                       // return the  memory address of i
}

int main() 
{
    std::cout << std::endl;

    int n = f1();
    std::cout << n << std::endl;

    n = f2();                       // what is the problem?
    std::cout << n << std::endl;     

    std::cout << std::endl;
    return 0;
}