#include <iostream>
#include <string>

int main()
{
    std::string string = "Hel\0lo";

    std::cout << string << std::endl;
}