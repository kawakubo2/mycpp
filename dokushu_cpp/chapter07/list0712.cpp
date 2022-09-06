#include <iostream>

class Base
{
    int value;
public:
    Base(int value) : value{value} {}
    void show();
};

void Base::show()
{
    std::cout << "this: " << this << std::endl
        << "this->value: " << value << std::endl;
}

class DerivedA : public Base
{
public:
    DerivedA(int value) : Base{value} {}
};

class DerivedB : public Base
{
public:
    DerivedB(int value) : Base{value} {}
};

class MoreDerived : public DerivedA, public DerivedB
{
public:
    MoreDerived(int d_a, int d_b)
        : DerivedA{d_a}, DerivedB{d_b}
    {
    }
};

int main()
{
    MoreDerived more_derived{42, 72};

    more_derived.DerivedA::show();
    more_derived.DerivedB::show();

    Base& base1 = static_cast<DerivedA&>(more_derived);
    base1.show();

    Base& base2 = static_cast<DerivedB&>(more_derived);
    base2.show();
}