#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "今日の気分を入力してください> ";
    std::getline(std::cin, s);
    std::cout << s << std::endl;
}