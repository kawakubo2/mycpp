#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
    for (int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v1 = {0, 1, 2, 3, 4};
    auto it = v1.begin() + 1;
    v1.erase(it);
    print_vector(v1);    
    
    std::vector<int> v2 = {0, 1, 2, 3, 4};
    auto it1 = v2.begin() + 1;
    auto it2 = v2.begin() + 3;
    v2.erase(it1, it2);
    print_vector(v2);    
}