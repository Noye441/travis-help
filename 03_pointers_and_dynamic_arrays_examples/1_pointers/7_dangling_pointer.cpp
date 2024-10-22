// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int *p = new int(1);        // allocate
    delete p;                   // deallocate: p is now a dangling pointer
    p = nullptr;                // p is safe

    if(p == nullptr) {          // safe reallocation of p without worrying about a memory leak
        p = new int(100);
    }
    
    delete p;

    std::cout << std::endl;
    return 0;
}
