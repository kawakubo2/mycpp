#include <iostream>


decltype(1) one() {
    return 100;
}

int main()
{
    auto i = one();
    decltype(i) j;
    j = 42.193;
    std::cout << j << std::endl;

}