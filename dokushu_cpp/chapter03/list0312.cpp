#include <iostream>

class A
{
public:
    void foo();
};

void A::foo() {
    std::cout << "foo()" << std::endl;
}

class B: public A
{
public:
    void bar();
};

void B::bar()
{
    std::cout << "bar()" << std::endl;
}

int main()
{
    A a;
    a.foo();

    B b;
    b.foo();
    b.bar();
}