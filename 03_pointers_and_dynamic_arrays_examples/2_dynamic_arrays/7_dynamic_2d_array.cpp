// S. Trowbridge 2024
#include <iostream>

/*
    1 2 3
    4 5 6

    Row major order: 1 2 3 4 5 6
    Column major order: 1 4 2 5 3 6
*/
void print(int *p, int rows, int cols) 
{ 
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << p[i * cols + j] << " ";        // first row index are 0 1 2, second row index are 3 4 5  (row major order)  
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
void printMemory(int *p, int rows, int cols) 
{                
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << &p[i * cols + j] << " ";       // first row index are 0 1 2, second row index are 3 4 5   
        }
    }
    std::cout << "\n";
}

int main() 
{
    std::cout << std::endl;

    int rows = 2, cols = 3;
    int *a = new int[rows * cols] {1, 2, 3, 4, 5, 6};   // allocate a rows * cols contiguous block of memory to store a two-dimensional array

    print(a, rows, cols);
    printMemory(a, rows, cols);                         // displays a contiguous block of data

    delete [] a;                                        // delete the dynamic array

    std::cout << std::endl;
    return 0;
}
