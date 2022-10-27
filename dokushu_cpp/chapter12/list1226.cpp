#include <iostream>
#include <set>

int main()
{
    std::set<int> is = { 5, 3, 1, 7};

    for (int i = 0; i < 8; i++)
    {
        auto iter = is.find(i);
        if (iter != is.end())
        {
            std::cout << *iter << std::endl;
        }
        else
        {
            std::cout << "? " << std::endl;
        }
    }
}