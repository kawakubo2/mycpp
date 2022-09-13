#include <iostream>

class A
{
public:
    virtual void foo();
};

void A::foo()
{
    std::cout << "A.foo()" << std::endl;
}

class B: public A
{
public:
    void foo() override;
    void foo(int i);
};

void B::foo()
{
    std::cout << "B::foo override" << std::endl;
}

void B::foo(int i)
{
    std::cout << "B::foo(int)" << std::endl;
}

int main()
{
    B b;
    b.foo();
    b.foo(42);
}
