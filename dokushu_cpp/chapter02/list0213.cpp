#include <iostream>

class data
{
public:
    using integer = int;
    integer get_value();
    void set_value(integer new_value);
private:
    integer value;
};


// 戻り値の型についてはネストした型名が
// 使用できないようだ。
data::integer data::get_value()
{
    return value;
}

void data::set_value(integer new_value)
{
    integer tmp = new_value;
    value = tmp;
}

int main()
{
    data d;

    using integer = data::integer;

    integer value = 42;
    d.set_value(value);

    std::cout << d.get_value() << std::endl;
}