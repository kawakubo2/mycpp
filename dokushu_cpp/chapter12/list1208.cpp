#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v0 = { 0, 2, 4, 6, 8 };
    std::cout << "&v0:" << &v0 << std::endl;
    std::vector<int> v1 = { 1, 3, 5, 7, 9 };
    std::cout << "&v1:" << &v1 << std::endl;

    v1 = v0;
    std::cout << "&v1:" << &v1 << std::endl;
    v0 = { 2, 3, 5};
    std::cout << "&v0:" << &v0 << std::endl;

    std::cout << "v0:" << std::endl;
    for (int i : v0)
    {
        std::cout << "  " << i << std::endl;
    }
    std::cout << "v1:" << std::endl;
    for (int i : v1)
    {
        std::cout << "  " << i << std::endl;
    }
}
