#include <vector>
#include <iostream>

int main()
{
    std::vector<int> empty;
    std::cout << "empty.size(): " << empty.size() << std::endl;

    std::vector<int> array = {10, 20, 30, 40, 50};
    std::cout << "array.size(): " << array.size() << std::endl;

    for (int e: array)
    {
        std::cout << e << std::endl;
    }
    for (int i = 0, len = array.size(); i < len; i++)
    {
        std::cout << array[i] << std::endl;
    }
}