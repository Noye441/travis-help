// S. Trowbridge 2024
#include <iostream>

class Shape {
private:
    std::string name;
public:
    Shape(): name("Circle"){}   
    void print() const { 
        std::cout << name << "\n"; 
    }
};

int main() 
{
    std::cout << std::endl;

    Shape *s = new Shape();             // allocate a dynamic object    

    delete s;                           // deallocate a dynamic object

    std::cout << std::endl;
    return 0;
}

