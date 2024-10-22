// S. Trowbridge 2023
#include <iostream>
using namespace std;

using func = int (*) (int, int);    // modern syntax equivalent of typedef (c++11 syntax)

int add(int a, int b) 
{
    return a+b;
}
int multiply(int a, int b) 
{
    return a*b;
}
void print(int a, int b, func f) 
{
    cout << f(a,b) << "\n";
}

int main() 
{
    cout << endl;

    print(5, 6, add);               
    print(5, 6, multiply);          

    cout << endl;
    return 0;
}
