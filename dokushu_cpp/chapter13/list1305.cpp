#include <iostream>
#include <string>

int main()
{
    std::string str;
    str = std::string("Java");
    std::cout << str << std::endl;

    str = "Python";
    std::cout << str << std::endl;
    
    str = 'C';
    std::cout << str << std::endl;

    str = { 'C', '+', '+'};
    std::cout << str << std::endl;
}