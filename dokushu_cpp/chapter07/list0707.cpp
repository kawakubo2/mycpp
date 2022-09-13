#include <iostream>

class A
{
    virtual void method();
public:
    void call_method() { method(); }
};

void A::method()
{
    std::cout << "A::method()" << std::endl;
}

class B : public A
{
public:
    void method() override;
};

void B::method()
{
    std::cout << "B::method()" << std::endl;
}

int main()
{
    B b;
    b.call_method();
}