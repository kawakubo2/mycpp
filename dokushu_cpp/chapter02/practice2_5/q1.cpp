#include <iostream>

class very_very_long_class
{
    using integer = int;
public:
    integer get_value();
    void set_value(integer new_value);
private:
    integer value;
};

using alias_class = very_very_long_class;

alias_class::integer alias_class::get_value()
{
    return value;
}

void alias_class::set_value(integer new_value)
{
    integer temp = new_value;
    value = temp;
}

int main()
{
    alias_class ac;
    ac.set_value(13);
    std::cout << ac.get_value() << std::endl;
}