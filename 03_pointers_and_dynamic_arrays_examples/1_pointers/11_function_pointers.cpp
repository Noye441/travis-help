// S. Trowbridge 2023
#include <iostream>

int add(int a, int b)                           // function with two int parameters and an int return type
{
    return a+b;
}
int multiply(int a, int b)                      // function with two int parameters and an int return type
{ 
    return a*b;
}
void print( int a, int b, int (*f)(int, int) )  // function pointer parameter
{                                              
    std::cout << (*f)(a,b) << "\n";             // call the function pointed to by f
}

int main() 
{
    std::cout << std::endl;

    int (*f)(int, int);                         // create a function pointer a function with two int parameters and an int return type

    f = add;                                    // f -> add
    std::cout << (*f)(5, 6) << "\n";            // call add

    f = multiply;                               // f -> multiply
    std::cout << f(5, 6) << "\n\n";             // call multiply (simpler syntax)

    print(5, 6, add);                           // print the addition of 5 and 6
    print(5, 6, multiply);                      // print the multiplication of 5 and 6

    std::cout << std::endl;
    return 0;
}
