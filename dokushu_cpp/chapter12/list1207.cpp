#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv = {1, 2, 3, 4, 5};
    for (int i : iv) {
        std::cout << i << std::endl;
    }
    iv.resize(4);
    for (int i : iv) {
        std::cout << i << std::endl;
    }
    iv.resize(6, -1);
    for (int i : iv) {
        std::cout << i << std::endl;
    }
}