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
    Insert ( store a value at a specific index )

    Example: Insert 25 at index 1
    size == 4

    DATA        | GARBAGE                        
    20 30 40 50 0 0 0 0 0 0

    Right Shift
       i     s-1        
    20 30 40 50 0 0 0 0 0 0
             -> 
    20 30 40 50 50 0 0 0 0 0
          -> 
    20 30 40 40 50 0 0 0 0 0
       -> 
    20 30 30 40 50 0 0 0 0 0
    
    Store 25
       i        
    20 25 30 40 50 0 0 0 0 0

    Increment Size
    DATA           | GARBAGE  
    20 25 30 40 50 0 0 0 0 0        
    size == 5
*/
void insert(int *a, int capacity, int &size, int value, int index)  // insert value at index
{
    if( size == capacity || index < 0 || index > size) { return; }  // index invalid: exit

    for(int i=size-1; i>=index; --i) {                              // right shift from size-1 down to index 
        a[i+1] = a[i];                                              // copy current to next
    }
    a[index] = value;                                               // store value at specified index
    ++size;                                                         // increment size                                               
}
/*
    Erase ( erase a value at a specific index )

    Example: Erase the value at index 0
    size == 5  

    DATA           | GARBAGE
    10 20 30 40 50 0 0 0 0 0

    Left Shift                                      
       i+1      s-1         
    10 20 30 40 50 0 0 0 0 0
       <-
    20 20 30 40 50 0 0 0 0 0
          <-
    20 30 30 40 50 0 0 0 0 0
             <-
    20 30 40 40 50 0 0 0 0 0    
                <-
    20 30 40 50 50 0 0 0 0 0        
    
    Decrement Size
    DATA        | GARBAGE 
    20 30 40 50 50 0 0 0 0 0      
    size == 4
*/
void erase(int *a, int &size, int index)          // erase value at index
{
    if( size < 0 || index < 0 || index >= size ) { return; }    // index invalid, exit

    for(int i=index+1; i<size; ++i) {                           // left shift from index+1 up to size-1 inclusive
        a[i-1] = a[i];                                          // copy current value to previous
    }
    --size;                                                     // decrement size 
}

int main() {
    std::cout << std::endl;

    const int CAPACITY = 10;                
    int nums[CAPACITY] = {10,20,30,40,50};  
    int size = 5;                           

    print(nums, size);
    std::cout << "\n";

    erase(nums, size, 0);                     // erase 10
    print(nums, size);

    insert(nums, CAPACITY, size, 25, 1);    // insert 25 between 20 and 30
    print(nums, size);

    erase(nums,size, 4);                     // erase 50
    print(nums, size);

    insert(nums, CAPACITY, size, 60, 4);    // insert 60 at the end (equivalent to push_back)
    print(nums, size);      

    std::cout << std::endl;    
    return 0;
}

