#include <iostream>

class A
{
    int value;
public:
    explicit A(int value) : value{value} {}
    void show() const;
};

void A::show() const
{
    std::cout << "A.value: " << value << std::endl;
}

class A_observer_ptr
{
    A* pointer;
public:
    explicit A_observer_ptr(A* pointer)
        : pointer{pointer} {}
    A& operator*() const;
    A* operator->() const;
};

A& A_observer_ptr::operator*() const
{
    return *pointer;
}

A* A_observer_ptr::operator->() const
{
    return pointer;
}

int main()
{
    A a{42};

    A_observer_ptr pointer{&a};

    (*pointer).show();

    pointer->show();
}

