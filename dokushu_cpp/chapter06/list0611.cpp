#include <memory>
#include <utility>
#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "コンストラクタ" << std::endl;
    }
    ~A()
    {
        std::cout << "デストラクタ" << std::endl;
    }
};

std::unique_ptr<A> allocate()
{
    std::cout << "allocate()" << std::endl;
    std::unique_ptr<A> ptr{new A{}};

    return std::move(ptr);
}

int main()
{
    {
        std::unique_ptr<A> ptr;
        std::cout << "関数呼び出し前" << std::endl;
        ptr = allocate();
        std::cout << "関数呼び出し後" << std::endl;
    }
    std::cout << "スコープの後" << std::endl;
}
