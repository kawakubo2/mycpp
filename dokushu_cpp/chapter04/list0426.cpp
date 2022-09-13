#include <iostream>

#define PLUS(a, b) ((a) + (b))

#define HOGE

int main()
{
#if defined(HOGE)
    std::cout << "defined(HOGE)はtrueです。" << std::endl;
#else
    std::cout << "defined(HOGE)はfalseです。" << std::endl;
#endif
}