#include <iostream>
#include <string>

class Foo
{
    std::string name;
public:
    Foo(std::string name);
    const std::string& get_name() const;
};

Foo::Foo(std::string name)
: name{name}
{
}

const std::string& Foo::get_name() const
{
    return name;
}

int main()
{
    Foo foo{"とても大きなオブジェクト"};
    const std::string& name = foo.get_name();
    std::cout << name << std::endl;
}