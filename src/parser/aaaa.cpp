#include <iostream>

int main()
{

    char y = 10;
    long x = (long)&y;
    char *x = new char[10];
    std::cout << x << std::endl;

    return 0;
}