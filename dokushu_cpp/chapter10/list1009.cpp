#include <iostream>

class A
{
public:
    A()
    {
        throw 0;
    }
};

int main()
{
    try
    {
        A* ptr = new A;

        delete ptr;
    }
    catch(int e)
    {
        std::cerr << "例外を捕まえました" << std::endl;
    }
    
}