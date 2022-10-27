#include <iostream>
#include <string>

template<typename T>
class A
{
public:
    std::string name() const
    {
        return "Aのプライマリテンプレート";
    }

    void common_method()
    {
        std::cout << "共通動作" << std::endl;
    }
};

template <>
class A<int>
{
public:
    std::string name() const
    {
        return "Aをintで明示的特殊化したテンプレート";
    }

    void common_method()
    {
        std::cout << "共通動作(特殊化)" << std::endl;
    }
};

int main()
{
    A<float> f;
    std::cout << f.name() << std::endl;
    f.common_method();

    A<int> i;
    std::cout << i.name() << std::endl;
    i.common_method();
}