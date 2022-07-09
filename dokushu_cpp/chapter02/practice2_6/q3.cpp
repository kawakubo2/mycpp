#include <iostream>
#include <string>

int main()
{
    do {
        std::string s;
        std::cout << "> ";
        std::getline(std::cin, s);
        if (s == "") break;
        std::cout << s << std::endl;
    } while(true);
}