// S. Trowbridge 2024
#include <iostream>

void print(int *p, int rows, int cols) 
{ 
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << *(p+(i * cols + j)) << " ";    // pointer arithmetic equivalent of p[i*cols+j] == *(p+(i * cols + j))
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
void printMem(int *p, int rows, int cols) 
{ 
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << (p+(i * cols + j)) << " ";     // pointer arithmetic equivalent of &(p[i*cols+j]) == (p+(i*cols+j))
        }
    }
    std::cout << "\n";
}

int main() 
{
    std::cout << std::endl;

    const int ROWS = 2, COLS = 3;

    int *a = new int[ROWS * COLS] {10,20,30,40,50,60};  // allocate a contiguous block of memory for a two-dimensional array

    print(a, ROWS, COLS);
    printMem(a, ROWS, COLS);    
    
    delete [] a;                                        // delete the dynamic array

    std::cout << std::endl;
    return 0;
}
