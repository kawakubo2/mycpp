#include <iostream>

class A
{
    int m_v;
public:
    A(int);
    int v() const;
};

A::A(int v) : m_v(v)
{

}

int A::v() const
{
    return m_v;
}

A a = 42;

int main()
{
    if (a.v() == 42)
    {
        std::cout << "A.v()は42です" << std::endl;
    }
    else
    {
        std::cout << "A.v()は42ではありません" << std::endl;
    }
}

