#include <iostream>

class Integer
{
    int value;
public:
    Integer(int value) : value{value} {}

    bool operator!() const;
    bool operator&&(const Integer& rhs) const;
    bool operator||(const Integer& rhs) const;
};

bool Integer::operator!() const
{
    return value == 0;
}

bool Integer::operator&&(const Integer& rhs) const
{
    return value && rhs.value;
}

bool Integer::operator||(const Integer& rhs) const
{
    return value || rhs.value;
}

int main(void)
{
    Integer x = 10;
    Integer y = 3;
    Integer z = 0;

    if (x && y) {
        std::cout << "xとyはどちらも0ではない" << std::endl;
    }
    if (z || x)
    {
        std::cout << "zとxの少なくともどちらかは0ではない" << std::endl;
    }
    if (!z)
    {
        std::cout << "zは0" << std::endl;
    }
}