#include <iostream>
#include <string>

class Book
{
    std::string title;
    std::string writer;
    int         price;
public:
    Book(std::string title, std::string writer, int price);
    Book(const Book& other);

    void set_title(std::string title);
    void set_writer(std::string writer);
    void set_price(int price);

    std::string get_title() const;
    std::string get_writer() const;
    int         get_price() const;
};

Book::Book(std::string title, std::string writer, int price) 
: title(title), writer(writer), price(price)
{

}

Book::Book(const Book& other)
{
    set_title(other.get_title());
    set_writer(other.get_writer());
    set_price(other.get_price());
}

void Book::set_title(std::string new_title)
{
    title = new_title;
}

void Book::set_writer(std::string new_writer)
{
    writer = new_writer;
}

void Book::set_price(int new_price)
{
    price = new_price;
}

std::string Book::get_title() const
{
    return title;
}

std::string Book::get_writer() const
{
    return writer;
}

int Book::get_price() const
{
    return price;
}

int main()
{
    Book book("羅生門", "芥川龍之介", 400);
    std::cout << book.get_title() << ":" << book.get_writer() << "(" \
        << book.get_price() << ")円" << std::endl;

    std::cout << "コピーコンストラクタで新しいBookオブジェクトを生成" << std::endl;
    Book book2(book);
    std::cout << book2.get_title() << ":" << book2.get_writer() << "(" \
        << book2.get_price() << ")円" << std::endl;

    std::cout << "コピー先オブジェクトのフィールドを変更" << std::endl;
    book2.set_title("明暗");
    book2.set_title("夏目漱石");
    book2.set_price(500);

    std::cout << book2.get_title() << ":" << book2.get_writer() << "(" \
        << book2.get_price() << ")円" << std::endl;
    
    std::cout << "コピー元オブジェクトのフィールドは変更されていない" << std::endl;
    std::cout << book.get_title() << ":" << book.get_writer() << "(" \
        << book.get_price() << ")円" << std::endl;
}