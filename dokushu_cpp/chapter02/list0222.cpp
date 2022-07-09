#include <iostream>

int main()
{
    int a[] = {1, 2, 3};

    auto lambda = [a]() mutable 
    {
        a[0] = 100;
        // 変化あり
        std::cout << a[0] << std::endl;
    };

    lambda();
    // 変化なし
    for (auto n : a) {
        std::cout << n << std::endl;
    }
}