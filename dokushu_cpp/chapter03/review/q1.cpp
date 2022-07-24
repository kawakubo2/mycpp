#include <iostream>
#include <string>

class A
{
    std::string s;
    int n;
public:
    A();
    A(const A& other);
    void set_s(std::string s);
    void set_n(int n);
    void show() const;
};

A::A()
: s(""), n(-1)
{

}

A::A(const A& other)
{
    this->s = other.s;
    this->n = other.n;
}

void A::set_s(std::string s)
{
    this->s = s;
}

void A::set_n(int n)
{
    this->n = n;
}

void A::show() const
{
    std::cout << s << " " << n << std::endl;
}

int main()
{
    A a;
    a.show();
    A b;
    b.set_s("ABC");
    b.set_n(123);
    b.show();
    A c = A(b);
    c.show();
    c.set_s("XYZ");
    c.set_n(456);
    c.show();
    b.show();
}