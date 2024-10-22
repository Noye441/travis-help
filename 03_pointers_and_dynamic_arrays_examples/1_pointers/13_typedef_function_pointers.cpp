// S. Trowbridge 2023
#include <iostream>

typedef int (*func) (int, int);     // typedef for a function pointer for a 2 int parameter int return function

int add(int a, int b) 
{
    return a+b;
}
int multiply(int a, int b) 
{
    return a*b;
}

void print(int a, int b, func f)    // f is a function point parameter 
{                               
    std::cout << f(a,b) << "\n";
}

int main() 
{
    std::cout << std::endl;

    print(5, 6, add);               // print the addition of 5 and 6
    print(5, 6, multiply);          // print the multiplication of 5 and 6

    std::cout << std::endl;
    return 0;
}
