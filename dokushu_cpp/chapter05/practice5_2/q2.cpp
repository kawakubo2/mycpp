#include <string>
#include <vector>
#include <iostream>

class product
{
    int id;
    std::string name;
    int price;
public:
    explicit product(int id, std::string name, int price)
    : id(id), name(name), price(price) {}
    product()
    : product(-1, "", -1) {}
    void show() const;
};

void product::show() const
{
    std::cout << id << " " << name << " " << price << std::endl;
}

int main()
{
    std::vector<product> p =
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},
        product{3, "laptop", 120000},
        product{4, "desktop", 180000},
    };

    for (auto e: p)
    {
        e.show();        
    }
}