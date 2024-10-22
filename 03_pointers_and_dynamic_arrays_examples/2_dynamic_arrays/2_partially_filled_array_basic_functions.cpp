// S. Trowbridge 2024
#include <iostream>

void print(int *a, int size)                  
{
    for(int i=0; i<size; ++i) {         
        std::cout << a[i] << " ";       
    }
    std::cout << "\n";
}
/*
    Push_back ( add a value to the end of the array data )

    size == 5, capacity = 10                                // size < capacity: there is room in the array to add more data
    0  1  2  3  4  5 6 7 8 9
    10 20 30 40 50 0 0 0 0 0

    Push_back 60
    0  1  2  3  4   5   6 7 8 9
    10 20 30 40 50 >60< 0 0 0 0                             // store 60 at index size
    size == 6                                               // increment size       
*/
void push_back(int *a, int capacity, int &size, int value)  // pass size by reference
{ 
    if(size == capacity) { return; }                        // if the array is full: exit          
    a[size] = value;                                        // store value at the end of the array
    ++size;                                                 // increment size
}
/*
    Pop_Back ( remove the last value of data )

    size == 5, capacity = 10
    0  1  2  3  4  5 6 7 8 9
    10 20 30 40 50 0 0 0 0 0

    Pop_Back
    0  1  2  3  4 5 6 7 8 9
    10 20 30 40 50 0 0 0 0 0        
    size == 4                                               // size decremented: 50 is no longer accessible as part of the array data (it is garbage)
*/
void pop_back(int &size)                                    // pass size by reference
{
    if( size == 0 ) { return; }                             // if array has data, decrement size (the original last value is now garbage)         
    --size;
}

int main() {
    std::cout << std::endl;

    const int CAPACITY = 10;                
    int nums[CAPACITY] = {10,20,30,40,50};  
    int size = 5;                           

    print(nums, size);
    push_back(nums, CAPACITY, size, 60);                    // size incremented because of pass by reference
    push_back(nums, CAPACITY, size, 70);                    // size incremented because of pass by reference
    print(nums, size);
    pop_back(size);                                         // size decremented because of pass by reference
    print(nums, size);

    std::cout << std::endl;    
    return 0;
}

