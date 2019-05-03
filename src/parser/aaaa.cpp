#include <iostream>
#include <typeinfo>
int main()
{

    char y = 10;
    std::cout << typeid(y).name()[0];
    double ff = -2.0;
    std::cout << ff;
    // long x = (long)&y;
    // char *x = new char[10];
    // std::cout << x << std::endl;

    return 0;
}