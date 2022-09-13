#include <iostream>

struct product {
    int id;
    int price;
    int stock;
};

int main()
{
    product pen; // C言語みたいにstruct product penと書かなくていいんだ？
    pen.id = 0;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen;

    std::cout << ptr->id << std::endl;
    std::cout << ptr->price << std::endl;
    std::cout << ptr->stock << std::endl;
}