#include <iostream>

auto show_value = [](int v) {
    std::cout << v << std::endl;
};
int main()
{
    show_value(42);
}