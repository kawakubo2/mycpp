#include <iostream>

class S
{
public:
    static int num;
};

int S::num = 123;

int main()
{
    std::cout << S::num << std::endl;

    S::num = 456;

    S s;
    std::cout << s.num << std::endl;
}