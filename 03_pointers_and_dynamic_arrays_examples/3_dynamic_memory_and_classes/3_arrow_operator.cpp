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

    Shape *s = new Shape();             // dynamic object    

    (*s).print();                       // dereference s to return the shape object, then call print (2 operations)

    s->print();                         // -> is equivalent to * and . combined

    delete s; 

    std::cout << std::endl;
    return 0;
}