#include <iostream>
#include <string>

class Product
{
    std::string m_name;
    int m_price;
public:
    explicit Product(std::string name, int price)
            : m_name(name), m_price(price) 
    {
        std::cout << "コンストラクタ呼び出し" << std::endl;
    }
    Product()
        : Product("", -1) {}
    ~Product()
    {
        std::cout << "デストラクタ呼び出し" << std::endl;
    }
    std::string name() const;
    int price() const;
    void show() const;
};

std::string Product::name() const
{
    return m_name;
}
int Product::price() const
{
    return m_price;
}
void Product::show() const
{
    std::cout << m_name << " " << m_price << std::endl;
}

int main()
{
    Product* p = new Product{"XPS9900", 300000};
    p->show();
    std::cout << "製品番号:" << p->name() << " 価格:" << p->price() << std::endl;
    delete p;
    std::cout << "main関数終了" << std::endl;
}
