#include <iostream>
#include <list>
#include <iterator>

void print_list(const std::list<int>& l)
{
    for (auto iter = l.begin(); iter != l.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::list<int> i10 = { 0, 1, 5, 6 };
    std::list<int> i11 = { 0, 1, 2, 3, 4, 5, 6 };

    auto iter = i10.begin();
    std::advance(iter, 2);

    auto first = i11.begin();
    std::advance(first, 2);
    auto last = i11.begin();
    std::advance(last, 5);
    i10.splice(iter, i11, first, last);
    
    std::cout << "i10: " << std::endl;
    print_list(i10);
    std::cout << "i11: " << std::endl;
    print_list(i11);
}