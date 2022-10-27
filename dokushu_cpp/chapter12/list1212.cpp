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
    std::vector<int> v = {1, 5, 9};

    v.insert(v.begin(), 0);
    print_vector(v);

    v.insert(v.end(), 10);
    print_vector(v);

    v.insert(v.begin() + 2, 2, 3);
    print_vector(v);

    int ia[] = { 6, 7, 8};
    v.insert(v.end() - 2, ia, ia + 3);
    print_vector(v);
}