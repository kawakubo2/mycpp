#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{10, 20, 30};

    std::vector<int>::reference r1 = v[0];
    std::cout << "r1: " << r1 << std::endl;
    auto& r2 = v[1];
    std::cout << "r2: " << r2 << std::endl;

    r1 = 100;
    r2 = 200;
    std::cout << "v[0]: " << v[0] << std::endl;
    std::cout << "v[1]: " << v[1] << std::endl;



}