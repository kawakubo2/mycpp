#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = { 10, -3, 2, 0, -1, -5, 4, 2 };
    std::vector<int> c(v.size());

    std::copy(v.begin(), v.end(), c.begin());
    for (auto e : c)
    {
        std::cout << e << ' ';
    }
    std::cout << std::endl;

    auto last = std::copy_if(v.begin(), v.end(), c.begin(), [](int i) { return i > 0; });
    c.erase(last, c.end());

    for (auto e : c)
    {
        std::cout << e << ' ';
    }
    std::cout << std::endl;
}