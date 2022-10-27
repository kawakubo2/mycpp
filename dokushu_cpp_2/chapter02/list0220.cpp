#include <iostream>

int main()
{
    int a = 0;

    auto lambda = [a]()
    {
        std::cout << a << std::endl;
    };

    a = 42;

    lambda();
}