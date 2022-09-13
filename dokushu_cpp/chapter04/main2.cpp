#include <iostream>
#include "variable.hpp"

extern int value;

extern void show_extern_variable();

int main()
{
    std::cout << "extern show_extern_variable()をmainの前に記述して実行" << std::endl;
    std::cout << "main: extern変数のアドレス: " << &value << std::endl;
    std::cout << "main: extern変数の値: " << value << std::endl;

    value = 0;

    show_extern_variable();
}