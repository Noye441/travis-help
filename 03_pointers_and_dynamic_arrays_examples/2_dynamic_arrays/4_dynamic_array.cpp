// S. Trowbridge 2024
#include <iostream>

void print(int *p, int size) 
{
    for(int i=0; i<size; ++i) {
        std::cout << p[i] << " ";               // print value 
        std::cout << &p[i] << "\n";             // print memory address
    }
    std::cout << std::endl;
}
void initialize(int *p, int size) 
{
    for(int i=0; i<size; ++i) {
        p[i] = (i+1)*10;                        // store a value into the array
    }
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 3;
    int *a = new int[SIZE];                     // allocate a dynamic array of SIZE values

    std::cout << sizeof(a) << " bytes \n\n";    // a is pointer as proven by its size in bytes

    initialize(a, SIZE);                        // store data
    print(a, SIZE);                             // print array data

    delete [] a;                                // deallocate a dynamic array

    std::cout << std::endl;
    return 0;
}
