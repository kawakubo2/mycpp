#include <iostream>
#include <string>

class Base
{
public:
    virtual std::string name() const;
};

std::string Base::name() const
{
    return "Base";
}

class Derived: public Base
{
public:
    virtual std::string name() const override;
};

std::string Derived::name() const
{
    return "Derived";
}

class MoreDrived: public Derived
{
public:
    std::string name() const override;
};

std::string MoreDrived::name() const
{
    return "MoreDerived";
}

int main()
{
    Base b;
    Derived d;
    MoreDrived md;

    std::cout << b.name() << std::endl;
    std::cout << d.name() << std::endl;
    std::cout << md.name() << std::endl;
}