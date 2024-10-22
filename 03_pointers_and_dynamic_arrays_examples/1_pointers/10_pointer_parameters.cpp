// S. Trowbridge 2024
#include <iostream>

void f1(int *i)                     // pass a pointer by value: i and p point to the same variable
{              
    *i = 100;                        
}

void f2(int *&i)                    // pass a pointer by reference: i is another name for p
{              
    delete i;                       
    i = new int(10000);             
}

void f3(int &i)                     // pass an integer by reference: i is another name for the variable pointed to by p
{
    i = 1000000;
}

int main() 
{
    int *p = new int{10};

    f1(p);                          // modify the the value of the variable that p points to 
    std::cout << *p << std::endl;

    f2(p);                          // modify what p points to
    std::cout << *p << std::endl;

    f3(*p);                         // deference the pointer to pass the dynamic variable by reference (can be safer then passing a pointer by value)
    std::cout << *p << std::endl;  

    delete p;

    std::cout << std::endl;
    return 0;
}
