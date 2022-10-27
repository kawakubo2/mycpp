#include <iostream>
#include <typeinfo> // 書き忘れたが、コンパイルエラー・実行時エラーにもならなかった。

class Base
{
public:
    virtual ~Base() {}
    const char* get_class_name() const { return "Base"; }
};

class Derived : public Base
{
public:
    const char* get_class_name() const { return "Derived"; }
};

class MoreDerived : public Derived
{
public:
    const char* get_class_name() const { return "MoreDerived"; }
};

int main()
{
    Derived d;
    Base& rb = d;

    std::cout << rb.get_class_name() << std::endl;

    try
    {
        Derived& rd = dynamic_cast<Derived&>(rb);
        std::cout << rd.get_class_name() << std::endl;    
    }
    catch(std::bad_cast e)
    {
        std::cerr << "dynamic_cast失敗" << std::endl;
    }
    
    try
    {
        MoreDerived& rmd = dynamic_cast<MoreDerived&>(rb);
        std::cout << rmd.get_class_name() << std::endl;    
    }
    catch(std::bad_cast e)
    {
        std::cerr << "dynamic_cast失敗" << std::endl;
    }
}