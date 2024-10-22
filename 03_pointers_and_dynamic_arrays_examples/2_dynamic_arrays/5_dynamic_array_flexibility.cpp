// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int size;                       
    std::cout << "Enter size: ";
    std::cin >> size;
    std::cout << "\n";

    int *a = new int[size];                         // size decided at runtime instead of compile time

    for(int i=0; i<size; ++i) { 
        std::cout << a[i] << " " << &(a[i]) << "\n";
    }

    delete [] a;

    std::cout << std::endl;
    return 0;
}
