#include <iostream>

class Bar
{
    int value;
public:
    Bar(int value) 
    : value(value) {}
    Bar();
    ~Bar();
    void show_value() const;
};

Bar::Bar()
: value(-1)
{
    std::cout << "デフォルトコンストラクタ" << std::endl;
}

Bar::~Bar()
{
    std::cout << "デストラクタ" << std::endl;
}

void Bar::show_value() const
{
    std::cout << value << std::endl;
}

int main()
{
    Bar* b = new Bar{-100};
    b->show_value();
    delete b;
    Bar* bar = new Bar[5]
    {
        Bar{1},
        Bar{2},
        Bar{3},
    };
    for (int i = 0; i < 5; i++) {
        bar[i].show_value();
    }

    delete [] bar;
}