#include <iostream>
#include <set>

void print_set(const std::set<int>& s)
{
    for (auto iter = s.begin(); iter != s.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set<int> is = { 1, 3, 5, 7 };
    auto first = is.begin();
    auto last = is.end();

    is.insert(8);
    // std::cout << "is.insert(8) ---> ";
    // print_set(is);

    is.erase(is.find(3));
    // std::cout << "is.erase(is.find(3)) ---> ";
    // print_set(is);

    while (first != last)
    {
        std::cout << *first << " ";
        ++first;
    }
    std::cout << std::endl;
}