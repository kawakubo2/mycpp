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
    std::set<int> is = { 1, 1, 2, 2, 3, 3, 4 };
    print_set(is);

    is.insert(5);
    print_set(is);

    is.insert(2);
    print_set(is);
}