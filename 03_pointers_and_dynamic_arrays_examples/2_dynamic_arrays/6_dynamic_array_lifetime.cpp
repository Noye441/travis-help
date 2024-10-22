// S. Trowbridge 2024
#include <iostream>

void print(int *q, int size) 
{
    for(int i=0; i<size; ++i) { 
        std::cout << q[i] << " ";
    }
    std::cout << "\n";
}
int* returnAnArray(int size)                    // return a pointer to a dynamic array 
{
    int *a = new int[size];                     // dynamic variables exist until they are deleted
    for(int i=0; i<size; ++i) { a[i] = i;}
    return a;
}

int main() 
{
    std::cout << std::endl;

    int size = 10;
 
    int *p = returnAnArray(size);               // p -> the returned array
    print(p, size);                         
    
    delete [] p;                                // deallocate the dynamic array

    std::cout << std::endl;
    return 0;
}
