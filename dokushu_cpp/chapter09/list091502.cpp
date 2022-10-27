#include <iostream>

template<typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c)
{
    return a * b + c;
}

int main()
{
    std::cout << fused_multiply_add(1.23456f, 1.23456, 3) << std::endl;
    std::cout << fused_multiply_add(1.23456, 1.23456f, 3) << std::endl;
    std::cout << fused_multiply_add(3, 1.23456, 1.23456f) << std::endl;
}