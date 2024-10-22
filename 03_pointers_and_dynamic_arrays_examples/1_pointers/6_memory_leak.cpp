// S. Trowbridge 2023
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int *p = new int(1);    // allocate
    p = new int(2);         // reallocate - memory leak because dynamic variable (1) is no longer accessible

                            // 1. avoid memory leaks by deleting unused memory
    int *q = new int(1);    // allocate 
    delete q;               // deallocate 
    q = new int(2);         // reallocate

                            // 2. avoid memory leaks by backing up access to dynamic memory
    int *r = new int(1);    // allocate
    int *backup = r;        // backup
    r = new int(2);         // reallocate

    delete p;
    delete q;
    delete r;
    delete backup;

    std::cout << std::endl;
    return 0;  
}
