#include <iostream>

class A
{
public:
    operator int() const { return 0; }
};

class B
{
public:
    explicit operator int() const { return 0; }
};

int main()
{
    A a;
    int ia = a;
    char ca = a;

    B b;
    /* NG
    int ib = b;
    char cb = b;
    */

   // OK
   int j(b);
   int k = static_cast<int>(b);

   std::cout << "j = " << j << std::endl;
   std::cout << "k = " << k << std::endl;
}