// S. Trowbridge 2024
#include <iostream>

class Shape {
private:
    std::string name;
    int *size;
public:
    Shape(): name("noname"), size( new int(0) )             // default constructor: initialize data members whenever an object is allocated
    {
        std::cout << "CONSTRUCTOR\n";
    }  
    ~Shape()                                                 // destructor: deallocate dynamic memory whenever an object is deallocated      
    {
        std::cout << "DESTRUCTOR\n";
        delete size;                                         // delete the dynamic data member
    } 
};

void func() 
{
    Shape s2;                                               // s2 constructor is called    
}                                                           // s2 destructor is called

int main() 
{
    std::cout << std::endl;

    Shape s1;                                               // s1 constructor is called      
    func();

    std::cout << std::endl;
    return 0;                                               // s1 destructor is called
}
