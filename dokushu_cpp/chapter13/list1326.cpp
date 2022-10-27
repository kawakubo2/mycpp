#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::string str = "kokohadoko";

    std::regex re{"(ko|do)"};

    std::string output = std::regex_replace(str, re, "ha");
    std::cout << output << std::endl;
}