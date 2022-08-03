#include <iostream>
#include <string>

class Foo
{
    std::string name;
public:
    explicit Foo(std::string name) : name(name) {}
    Foo() : Foo("NO NAME") {};
    ~Foo();
    void show_name() const;
};

Foo::~Foo()
{
    std::cout << "Fooのデストラクタ" << std::endl;
}

void Foo::show_name() const
{
    std::cout << "Foo name: " << name << std::endl;
}

int main()
{
    Foo* foo = new Foo[10]
    {
        Foo{"first"},
        Foo{"second"},
    };
    for (int i = 0; i < 10; i++) {
        foo[i].show_name();
    }

    delete [] foo;
}