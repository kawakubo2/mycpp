#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{"[^A]+A"};
    std::string input = "ABRACADABRA";

    std::sregex_token_iterator iter(input.begin(), input.end(), re);
    decltype(iter) last;

    while (iter != last)
    {
        std::cout << "[" << iter->str() << "]"
            << " pos = " << std::distance(input.cbegin(), iter->first)
            << " len = " << iter->length()
            << std::endl;
        iter++; 
    }
}