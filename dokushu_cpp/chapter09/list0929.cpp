#include <iostream>
#include <vector>

template <typename T>
typename std::vector<T>::reference
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}

template <typename T>
std::size_t size(const std::vector<T>& v)
{
    return v.size();
}

int main()
{
    std::vector<int> v = {0, 1, 2, 3};
    std::vector<int>::reference r = at(v, 2);
    std::cout << "at(v, 2): " << r << std::endl;
    r = 200;
    std::cout << "v[2]: " << v[2] << std::endl;
    int r2 = v[2];
    std::cout << "r2: " << r2 << std::endl;
    r2 = 20000;
    std::cout << "v[2]: " << v[2] << std::endl;
}