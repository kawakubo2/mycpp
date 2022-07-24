#include <iostream>

class product
{
    int price;
public:
    product(int price)
    {
        this->price = price;
    }
    int get_price() const
    {
        return this->price;
    }
    void set_price(int price)
    {
        this->price = price;
    }
};

int main()
{
    product p(123);
    std::cout << p.get_price() << std::endl;

    p.set_price(31);
    std::cout << p.get_price() << std::endl;

}