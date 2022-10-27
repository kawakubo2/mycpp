#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv0 = {1, 2, 3, 4, 5};
    std::vector<int> iv1 = iv0;

    iv1[0] = 100;

    std::cout << "iv1の内容" << std::endl;
    for (int i : iv1) {
        std::cout << i << std::endl;
    }

    std::cout << "iv0の内容" << std::endl;
    for (int i : iv0) {
        std::cout << i << std::endl;
    }
}