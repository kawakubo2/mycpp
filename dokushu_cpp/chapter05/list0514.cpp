#include <iostream>
#include <string>

class A
{
    int m_v;
    std::string m_n;
public:
    A(int, std::string);
    A(float);
};

A::A(int v, std::string n)
: m_v(v), m_n(n)
{
}

A::A(float)
: A{-1, "float"}
{
}

int main()
{
    A ap(42, "0");
    A ab{42, "0"};

    A bp = A(42, "0");
    A bb = A{42, "0"};
    // A cp = (42, "0");
    A cb = {42, "0"};

    A dp = (42, 0.0); // A(int, std::string)ではなく、A(float)が呼び出される
    // A db = {42, 0.0};

    double pi = 3.1415926536;
    A ep(pi); // doubleからfloatへ縮小変換される
    // A eb{pi}; {}では縮小変換は禁止されているのでエラーとなる
}
