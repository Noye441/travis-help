#ifndef CONTAINER_H
#define CONTAINER_H

class FloatArray {
private:
    int maxValues;  // Maximum number of values
    int numValues;  // Current number of values
    float* data;    // Dynamic array pointer

public:
    // Constructor: Allocates a dynamic array and initializes default values
    FloatArray(int maxSize = 5);

    // Destructor: Deallocates the dynamic array
    ~FloatArray();

    // Returns true if the array is empty, false otherwise
    bool empty() const;

    // Returns the number of values in the array
    int size() const;

    // Returns the maximum number of possible values in the array
    int maxSize() const;

    // Reserve new memory if n is greater than the current maximum
    void reserve(int n);

    // Clears the array and resets the size to 0
    void clear();

    // Adds a value to the end of the array
    void push_back(float value);

    // Prints all the array values to the console in one line
    void print() const;
};

#endif
