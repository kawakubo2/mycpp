#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s = "apple";
    std::vector<char> cv{s.begin(), s.end()};
    for (char c : cv)
    {
        std::cout << c << std::endl;
    }

    const char fruit[] = "apple";
    std::vector<char> cv2{fruit, fruit + 5};
    for (char c : cv2)
    {
        std::cout << c << std::endl;
    }
}