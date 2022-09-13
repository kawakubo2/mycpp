#include <iostream>

int main()
{
    int a[] = {1, 2, 3};
    auto double_value = [&a]() {
        for (int i = 0; i < 3; i++) {
            a[i] *= 2;
        }
    };

    double_value();

    for (auto n : a) {
        std::cout << n << std::endl;
    }
}