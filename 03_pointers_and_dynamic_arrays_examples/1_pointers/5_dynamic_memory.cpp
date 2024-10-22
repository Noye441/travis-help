// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;
                                        // new - allocate dynamic memory
    int *p = new int(5);                // automatic variable p points to a dynamic integer variable
        
    std::cout << *p << "\n";            // dereference p to access the data of the dynamic variable pointed to by p

                                        // delete - deallocate dynamic memory
    delete p;                           // deallocate the dynamic variable that p points to 

    std::cout << std::endl;
    return 0;
}
