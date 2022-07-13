#include <iostream>
#include <string>

class Book
{
    std::string m_title;
    std::string m_writer;
    int         m_price;
public:
    Book(std::string title, std::string writer, int price);

    void set_title(std::string title);
    void set_writer(std::string writer);
    void set_price(int price);

    std::string title() const;
    std::string writer() const;
    int         price() const;
};

Book::Book(std::string title, std::string writer, int price) :
m_title(title), m_writer(writer), m_price(price)
{

}

void Book::set_title(std::string title)
{
    m_title = title;
}

void Book::set_writer(std::string writer)
{
    m_writer = writer;
}

void Book::set_price(int price)
{
    m_price = price;
}

std::string Book::title() const
{
    return m_title;
}

std::string Book::writer() const
{
    return m_writer;
}

int Book::price() const
{
    return m_price;
}

int main()
{
    Book book("羅生門", "芥川龍之介", 400);
    std::cout << book.title() << ":" << book.writer() << "(" \
        << book.price() << ")円" << std::endl;
}