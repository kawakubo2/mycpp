#include <iostream>

template <typename R, typename AB, typename A, typename B, typename C>
R fused_multiply_add(A a, B b, C c)
{
    AB ab = a * b;
    return static_cast<R>(ab + c);
}

int main()
{
    float r = fused_multiply_add<float, float, double, int, float>(1.23456, 2, 1.23456f);
    std::cout << r << std::endl;
}