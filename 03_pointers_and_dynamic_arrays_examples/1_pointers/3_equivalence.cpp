// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;

    double a = 3.14;                        // initialize two doubles
    double b = 3.14;

    double *p = &a;                         // initialize two double pointers, p -> a, q -> b
    double *q = &b;

    if(&p == &q)                            // what are we comparing? 
        std::cout << "&p == &q" << "\n\n";
    else
        std::cout << "&p != &q" << "\n\n";

    if(p == q)                              // what are we comparing? 
        std::cout << "p == q" << "\n\n";
    else
        std::cout << "p != q" << "\n\n";    

    if(*p == *q)                            // what are we comparing? 
        std::cout << "*p == *q" << "\n";
    else
        std::cout << "*p != *q" << "\n";

    std::cout << std::endl;
    return 0;
}
