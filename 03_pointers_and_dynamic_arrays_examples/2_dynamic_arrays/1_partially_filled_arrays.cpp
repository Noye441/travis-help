// S. Trowbridge 2024
#include <iostream>

void print(int *a, int size)                // What is the time complexity?
{
    for(int i=0; i<size; ++i) {         
        std::cout << a[i] << " ";       
    }
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl;

    // indices:     0    1    2    3    4    5    6    7    8    9         allocate CAPACITY values
    // data:        10   20   30   40   50   0    0    0    0    0         the first size values are data, the rest is garbage
    // memory:      3010 3014 3018 301c 3020 3024 3028 302c 3030 3034 

    const int CAPACITY = 10;                // allocated memory maximum
    int nums[CAPACITY] = {10,20,30,40,50};  // partially filled array: 5 values of data followed by 5 values of garbage
    int size = 5;                           // current number of values

    print(nums, size);                      // print size values (data), not CAPACITY values (data + garbage)

    std::cout << std::endl;    
    return 0;
}

