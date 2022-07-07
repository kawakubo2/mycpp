#include <iostream>

enum class Category {
    value1,
    value2,
    value3 = 100,
    value4,
};

int main()
{
    Category cat = Category::value3;

    std::cout << static_cast<int>(cat) << std::endl;
    // std::cout << cat << std::endl; <--- 怒られた
}