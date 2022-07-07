#include <iostream>

struct product {
    int id;
    int price;
    int stock;
};

void show_product(product p)
{
    p.price = 120;
    std::cout << p.id << std::endl;
    std::cout << p.price << std::endl;
    std::cout << p.stock << std::endl;
}

int main()
{
    product pen = { 1, 100, 2 };
    show_product(pen);
}