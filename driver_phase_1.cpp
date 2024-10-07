#include "Container.h"
#include <iostream>

int main() {
    // Create a FloatArray with an initial max size of 5
    FloatArray floatArray(5);

    // Test if the array is empty
    if (floatArray.empty()) {
        std::cout << "The array is currently empty." << std::endl;
    }

    // Add some values
    floatArray.push_back(1.1);
    floatArray.push_back(2.2);
    floatArray.push_back(3.3);

    // Print the array
    std::cout << "Array contents: ";
    floatArray.print();

    // Check the size and max size
    std::cout << "Current size: " << floatArray.size() << std::endl;
    std::cout << "Max size: " << floatArray.maxSize() << std::endl;

    // Add more values to trigger reserve
    floatArray.push_back(4.4);
    floatArray.push_back(5.5);
    floatArray.push_back(6.6); // This should cause the array to resize

    // Print the array after push_back
    std::cout << "Array contents after push_back: ";
    floatArray.print();

    // Check the size and max size again
    std::cout << "Current size: " << floatArray.size() << std::endl;
    std::cout << "Max size: " << floatArray.maxSize() << std::endl;

    // Clear the array
    floatArray.clear();
    std::cout << "Array cleared. Size: " << floatArray.size() << std::endl;

    return 0;
}
