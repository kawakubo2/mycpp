#include <iostream>

int main()
{
    int a;
    int* ptr = &a;
    *ptr = 42;
    std::cout << a << std::endl;
}