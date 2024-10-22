// S. Trowbridge 2024
#include <iostream>

class Shape {
private:
    int size;
public:
    Shape(): size(0) {} 
    int getSize() { return size; } 
};

void print(Shape *s)                   // pass a pointer by value: higher chance of problems (memory leaks, dangling pointers, boundary issues)
{                    
    std::cout << s->getSize() << "\n"; 
} 
void print(Shape &s)                   // pass by reference 
{                    
    std::cout << s.getSize() << "\n"; 
}  

int main() {
    std::cout << std::endl;

    Shape s1;                          // automatic object
    print(&s1);                        // syntax to pass an automatic object by pointer
    print(s1);                         // syntax to pass an automatic object by reference

    Shape *s2 = new Shape{};           // dynamic object
    print(s2);                         // syntax to pass a dynamic object by pointer
    print(*s2);                        // syntax to pass a dynamic object by reference

    std::cout << std::endl;
    return 0;
}