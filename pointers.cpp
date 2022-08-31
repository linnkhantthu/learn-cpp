#include <iostream>
int main()
{
    int x = 123;
    int *p = &x;
    const int *y = p;
    // *p = 456; // change the value of pointed-to object
    std::cout << "The value of x is: " << x;
    std::cout << "The value of p is: " << p;
    return 0;
}