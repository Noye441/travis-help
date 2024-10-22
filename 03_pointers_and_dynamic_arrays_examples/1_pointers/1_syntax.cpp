// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int i=5, j=15;              // initialize two integer variables

    int *p = &i;                // p -> i ( point p to i )
    *p = 10;                    // dereference p to modify i
    std::cout << *p << "\n";    // dereference p to read i

    p = &j;                     // p -> j ( point p to j )
    std::cout << *p << "\n";    // dereference p to read j

    int *q, r;                  // beware: q is an integer pointer, r is an integer
    q = &i;
    //r = &j;                   // compiler error: in line 17 r was declared as an integer, not an integer pointer           

    int s, *t;
    //s = &i;                   // compiler error: in line 21 s was declared as an integer, not an integer pointer   
    t = &j;       

    int *u, *v;                 // correct syntax: s and t are both integer pointers
    u = &i;
    v = &j;    

    std::cout << std::endl;
    return 0;
}
