#include <iostream>

int main()
{
    double upperbase, lowerbase, height;
    std::cout << "台形の面積を計算します" << std::endl;
    std::cout << "上底> ";
    std::cin >> upperbase;
    std::cout << "下底> ";
    std::cin >> lowerbase;
    std::cout << "高さ> ";
    std::cin >> height;
    
    std::cout << "面積 ---> " << (upperbase + lowerbase) * height / 2 << std::endl;
}