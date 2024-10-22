// S. Trowbridge 2023
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int a = 5;               
    const int b = 5;          

                                // CONST POINTER
    int *const p = &a;          // p is a const pointer to a: p cannot be modified, a can be modified
    *p = 20;
    //p = &b;                   // compiler error

                                // POINTER TO A CONSTANT VARIABLE
    const int *q;               // q is a pointer to a constant variable, q can be modified, *q cannot be modified
    q = &a;                     // q can point to non-const
    q = &b;                     // q can point to a const
    //*q = 10;                  // compiler error

                                // CONST POINTER TO A CONSTANT VARIABLE
    const int *const r = &a;    // r is a const pointer to constant variable a, neither p nor a can be modified
    //r = &b;                   // compiler error
    //*r = 10;                  // compiler error

    std::cout << std::endl;
    return 0;
}
