#include <iostream>

void no_throw_exception() noexcept
{
    try
    {
        throw 0;
    }
    catch(...)
    {
        std::cerr << "例外を捕まえました" << std::endl;
    }
    
}

int main()
{
    no_throw_exception();
}