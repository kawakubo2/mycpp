#include <iostream>

class Base
{
public:
    virtual void method();
};

void Base::method()
{
    std::cout << "Baseのメンバ関数" << std::endl;
}

class Derived: public Base
{
public:
    void method() override;
};

void Derived::method()
{
    std::cout << "Derivedでオーバライドしたメンバ関数" << std::endl;
}

int main()
{
    Derived derived;

    Base& base = derived;

    base.method();
}