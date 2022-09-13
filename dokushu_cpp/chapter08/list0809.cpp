#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in("hello_eof.txt");

    std::string line;

    while (std::getline(in, line), !in.eof()) {
        std::cout << line << std::endl;
    }
}