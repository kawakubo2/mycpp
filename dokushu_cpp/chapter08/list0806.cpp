#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out;
    out.open("hello_file.txt");

    out << "Hello, File IO" << std::endl;
    out << std::setprecision(4) << std::scientific << 12.34567f << std::endl;
    out << 12345678 << std::endl;
    out.close();

    std::ifstream in{"hello_file.txt"};

    std::string line;
    std::getline(in, line);
    float f;
    in >> f;
    int n;
    in >> n;
    std::cout << line << std::endl;
    std::cout << f << std::endl;
    std::cout << n << std::endl;
}