#include <new>
#include <iostream>

int main()
{
    try
    {
        int* ptr = new int;

        delete ptr;
    }
    catch(std::bad_alloc& e)
    {
        std::cerr << "メモリ割り当てに失敗しました" << std::endl;
    }
    
}