#include <iostream>
#include <string>

int main()
{
    std::string str0 = "ushikamoshika";
    const char* cstr = "kamoshika";
    std::string str1 = cstr;

    int ret = str0.compare("yamaneko");
    std::cout << "ret: " << ret << std::endl;

    ret = str0.compare(4, std::string::npos, str1);
    std::cout << "ret: " << ret << std::endl;

    ret = str0.compare(8, 5, str1, 4, 5);
    std::cout << "ret: " << ret << std::endl;
}