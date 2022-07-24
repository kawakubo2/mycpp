#include <iostream>

void foo()
{
    std::cout << "グローバル名前空間のfoo関数" << std::endl;
}

namespace module 
{
    void foo()
    {
        std::cout << "module名前空間のfoo関数" << std::endl;
    }    
}

int main()
{
    foo();
    using module::foo;
    foo();
}