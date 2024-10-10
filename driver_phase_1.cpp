#include "Container.h"
#include <iostream>

int main() {
    // Create a FloatArray with an initial max size of 5
    // Time Complexity: O(n), where n is 5
    // Memory Handling: Allocates memory for 5 float values.
    FloatArray floatArray(5);

    // Test if the array is empty
    // Time Complexity: O(1)
    // Memory Handling: No memory allocation, simply checks the size.
    if (floatArray.empty()) {
        std::cout << "The array is currently empty." << std::endl;
    }

    // Add some values
    // Time Complexity: O(1) (amortized), O(n) when resizing
    // Memory Handling: Allocates more memory if the array becomes full.
    floatArray.push_back(1.1);
    floatArray.push_back(2.2);
    floatArray.push_back(3.3);

    // Print the array
    // Time Complexity: O(n), where n is the number of elements (numValues)
    // Memory Handling: No memory allocation, just accesses the data.
    std::cout << "Array contents: ";
    floatArray.print();

    // Check the size and max size
    // Time Complexity: O(1)
    // Memory Handling: No memory allocation or deallocation.
    std::cout << "Current size: " << floatArray.size() << std::endl;

    // Time Complexity: O(1)
    // Memory Handling: No memory allocation or deallocation.
    std::cout << "Max size: " << floatArray.maxSize() << std::endl;

    // Add more values to trigger reserve
    // Time Complexity: O(1) (amortized), O(n) when resizing
    // Memory Handling: Allocates memory when the array is full and copies elements.
    floatArray.push_back(4.4);
    floatArray.push_back(5.5);
    floatArray.push_back(6.6); // This should cause the array to resize

    // Print the array after push_back
    // Time Complexity: O(n), where n is the number of elements
    // Memory Handling: No memory allocation.
    std::cout << "Array contents after push_back: ";
    floatArray.print();

    // Check the size and max size again
    // Time Complexity: O(1)
    // Memory Handling: No memory allocation or deallocation.
    std::cout << "Current size: " << floatArray.size() << std::endl;

    // Time Complexity: O(1)
    // Memory Handling: No memory allocation or deallocation.
    std::cout << "Max size: " << floatArray.maxSize() << std::endl;

    // Clear the array
    // Time Complexity: O(1)
    // Memory Handling: No memory is freed, only numValues is reset.
    floatArray.clear();
    std::cout << "Array cleared. Size: " << floatArray.size() << std::endl;

    return 0;
}
