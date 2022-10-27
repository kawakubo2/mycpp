#include <iostream>
#include <vector>

template <typename T>
using vector_reference = typename std::vector<T>::reference;

template <typename T>
vector_reference<T>
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}

int main()
{
    std::vector<int> v = {10, 20, 30, 40};

    std::vector<int>::reference r = at(v, 2);
    std::cout << "r: " << r << std::endl;
    r = 300;
    std::cout << "r = 300" << std::endl;
    std::cout << "v[2]: " << v[2] << std::endl;
}