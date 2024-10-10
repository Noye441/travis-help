#include "Container.h"
#include <iostream>

// Constructor: Allocates a dynamic array and initializes default values
// Time Complexity: O(n), where n is the initial size (maxSize)
// Memory Handling: Allocates memory for maxValues elements dynamically.
FloatArray::FloatArray(int maxSize) : maxValues(maxSize), numValues(0) {
    data = new float[maxValues]; // Allocate dynamic array
}

// Destructor: Deallocates the dynamic array
// Time Complexity: O(1)
// Memory Handling: Frees the dynamically allocated array to avoid memory leaks.
FloatArray::~FloatArray() {
    delete[] data;
}

// Returns true if the array is empty, false otherwise
// Time Complexity: O(1)
// Memory Handling: No memory is allocated or freed; simply checks numValues.
bool FloatArray::empty() const {
    return numValues == 0;
}

// Returns the number of values in the array
// Time Complexity: O(1)
// Memory Handling: No memory is allocated or freed; returns numValues.
int FloatArray::size() const {
    return numValues;
}

// Returns the maximum number of possible values in the array
// Time Complexity: O(1)
// Memory Handling: No memory is allocated or freed; returns maxValues.
int FloatArray::maxSize() const {
    return maxValues;
}

// Reserve new memory if n is greater than the current maximum
// Time Complexity: O(n), where n is the number of elements to copy (numValues)
// Memory Handling: Allocates a new dynamic array and frees the old one if n > maxValues.
void FloatArray::reserve(int n) {
    if (n > maxValues) {
        float* newData = new float[n]; // Allocate new array
        for (int i = 0; i < numValues; i++) {
            newData[i] = data[i]; // Copy old values to new array
        }
        delete[] data; // Deallocate old array to avoid memory leaks
        data = newData; // Point to the new array
        maxValues = n;  // Update maxValues
    }
}

// Clears the array and resets the size to 0
// Time Complexity: O(1)
// Memory Handling: No memory is allocated or freed; only numValues is reset to 0.
void FloatArray::clear() {
    numValues = 0; // Reset the number of values to 0
}

// Adds a value to the end of the array
// Time Complexity: O(1) on average (amortized), O(n) when resizing occurs
// Memory Handling: If the array is full, allocates more memory and frees the old array.
void FloatArray::push_back(float value) {
    if (numValues == maxValues) {
        reserve(maxValues * 2); // Double the size if full (O(n) memory reallocation)
    }
    data[numValues++] = value; // Add value and increment numValues
}

// Prints all the array values to the console in one line
// Time Complexity: O(n), where n is the number of elements (numValues)
// Memory Handling: No memory is allocated or freed; just accesses existing data.
void FloatArray::print() const {
    for (int i = 0; i < numValues; i++) {
        std::cout << data[i] << " "; // Iterates through all elements
    }
    std::cout << std::endl;
}
