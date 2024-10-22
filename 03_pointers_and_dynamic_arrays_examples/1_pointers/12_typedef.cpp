// S. Trowbridge 2023
#include <iostream>

typedef int* debit;                 // define a global alias for type int* 
typedef int* credit;                // define a global alias for type int*

void printLoss(debit d)             // debit is easier to read than int*
{                                  
    std::cout << *d << std::endl;
}

void printGain(credit c)            // credit is easier to read than int*
{                                  
    std::cout << *c << std::endl;
}

int main() 
{
    std::cout << std::endl;

    debit d = new int(5000);        // d is an integer pointer
    credit c = new int(10000);      // c is an integer pointer

    printLoss(d);
    printGain(c);

    std::cout << std::endl;
    return 0;
}
