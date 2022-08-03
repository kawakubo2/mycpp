#include <iostream>

class C
{
    int a = 42;
public:
    void set_a(int value)
    {
        [this, value]()
        {
            a = value;
        }();
    }
    void show_a()
    {
        [this]()
        {
            std::cout << "C::a = " << a << std::endl;
        }();
    }
};

int main()
{
    C c;
    c.show_a();
    c.set_a(10);
    c.show_a();

}