#include <iostream>

class Float
{
    float value;
public:
    Float(float value)
    : value{value} {}
    Float operator+(const Float& rhs) const;
    Float operator-(const Float& rhs) const;
    Float operator*(const Float& rhs) const;
    Float operator/(const Float& rhs) const;

    void show() const;
};

Float Float::operator+(const Float& rhs) const
{
    return Float(value + rhs.value);
}

Float Float::operator-(const Float& rhs) const
{
    return Float(value - rhs.value);
}

Float Float::operator*(const Float& rhs) const
{
    return Float{value * rhs.value};
}

Float Float::operator/(const Float& rhs) const
{
    return Float{value / rhs.value};
}

void Float::show() const
{
    std::cout << "Float.value = " << value << std::endl;
}

int main()
{
    Float x = 3.7F;
    Float y = 2.1F;
    Float z = 5.3F;

    auto v = (x + z) * (z - x) / y;
    v.show();
}