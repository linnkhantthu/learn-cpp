#include <iostream>

int main()
{
    int x = 123;
    int &y = x; // now 'y' is a reference of x
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";

    x = 1;
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";

    y = 2;
    std::cout << "x: " << &x << "\n";
    std::cout << "y: " << &y << "\n";

    // y is just a variable , its memory address is the same with x's

    return 0;
}