#include <iostream>
auto is_even = [](int n) -> bool
{
    return n % 2 == 0;
};

int main(void)
{
    std::cout << is_even(6) << std::endl;
}