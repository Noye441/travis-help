#ifndef CONTAINER_H
#define CONTAINER_H

class FloatArray {
private:
    int maxValues;  // Maximum number of values
    int numValues;  // Current number of values
    float* data;    // Pointer to dynamic array for storing float values

public:
    // Constructor: Allocates a dynamic array and initializes default values
    // Time Complexity: O(n), where n is maxSize
    // Memory Handling: Dynamically allocates memory for maxValues floats (O(n) memory).
    FloatArray(int maxSize = 5);

    // Destructor: Deallocates the dynamic array
    // Time Complexity: O(1)
    // Memory Handling: Frees the dynamically allocated memory when the object is destroyed.
    ~FloatArray();

    // Returns true if the array is empty, false otherwise
    // Time Complexity: O(1)
    // Memory Handling: No new memory allocation; simply checks the value of numValues.
    bool empty() const;

    // Returns the number of values in the array
    // Time Complexity: O(1)
    // Memory Handling: No new memory allocation; just returns numValues.
    int size() const;

    // Returns the maximum number of possible values in the array
    // Time Complexity: O(1)
    // Memory Handling: No new memory allocation; just returns maxValues.
    int maxSize() const;

    // Reserve new memory if n is greater than the current maximum
    // Time Complexity: O(n), where n is numValues (number of elements being copied).
    // Memory Handling: Allocates new memory if required, and frees the old memory.
    // If n <= maxValues, no new memory is allocated.
    void reserve(int n);

    // Clears the array and resets the size to 0
    // Time Complexity: O(1)
    // Memory Handling: No memory is freed or allocated; numValues is simply reset to 0.
    void clear();

    // Adds a value to the end of the array
    // Time Complexity: O(1) on average (amortized), O(n) when resizing
    // Memory Handling: If the array is full, allocates more memory, otherwise adds the value.
    void push_back(float value);

    // Prints all the array values to the console in one line
    // Time Complexity: O(n), where n is numValues
    // Memory Handling: No additional memory is allocated; it just accesses the existing data.
    void print() const;
};

#endif
