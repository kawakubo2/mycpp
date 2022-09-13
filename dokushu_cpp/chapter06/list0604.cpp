#include <iostream>
#include <cstdio>

class Integer
{
    int value;
public:
    Integer(int value)
    : value{value} {}

    Integer& operator++(); // 前置インクリメント
    Integer& operator--(); // 前置デクリメント

    Integer operator++(int); // 後置インクリメント
    Integer operator--(int); // 後置デクリメント

    void show() const;
};

Integer& Integer::operator++()
{
    ++value;
    return *this;
}

Integer& Integer::operator--()
{
    --value;
    return *this;
}

Integer Integer::operator++(int)
{
    auto tmp = *this;
    ++*this;
    return tmp;
}

Integer Integer::operator--(int)
{
    auto tmp = *this;
    --*this;
    return tmp;
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 10;
    Integer y = 7;
    Integer z = 3;
    Integer w = 5;
    auto a1 = ++x;
    a1.show();
    Integer a2 = --y;
    a2.show();
    Integer a3 = z++;
    a3.show();
    z.show();
    Integer a4 = w--;
    a4.show();
    w.show();
}