#include "Container.h"
#include <iostream>

// Constructor: Allocates a dynamic array and initializes default values
FloatArray::FloatArray(int maxSize) : maxValues(maxSize), numValues(0) {
    data = new float[maxValues]; // Allocate dynamic array
}

// Destructor: Deallocates the dynamic array
FloatArray::~FloatArray() {
    delete[] data;
}

// Returns true if the array is empty, false otherwise
bool FloatArray::empty() const {
    return numValues == 0;
}

// Returns the number of values in the array
int FloatArray::size() const {
    return numValues;
}

// Returns the maximum number of possible values in the array
int FloatArray::maxSize() const {
    return maxValues;
}

// Reserve new memory if n is greater than the current maximum
void FloatArray::reserve(int n) {
    if (n > maxValues) {
        float* newData = new float[n]; // Allocate new array
        for (int i = 0; i < numValues; i++) {
            newData[i] = data[i]; // Copy old values to new array
        }
        delete[] data; // Deallocate old array
        data = newData; // Point to new array
        maxValues = n;  // Update maxValues
    }
}

// Clears the array and resets the size to 0
void FloatArray::clear() {
    numValues = 0; // Reset the number of values to 0
}

// Adds a value to the end of the array
void FloatArray::push_back(float value) {
    if (numValues == maxValues) {
        reserve(maxValues * 2); // Double the size if full
    }
    data[numValues++] = value; // Add value and increment numValues
}

// Prints all the array values to the console in one line
void FloatArray::print() const {
    for (int i = 0; i < numValues; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
