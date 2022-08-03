#include <iostream>

class Maker
{
public:
    Maker();
    ~Maker();
};

Maker::Maker()
{
    std::cout << "コンストラクタ: " << this << std::endl;
}
Maker::~Maker()
{
    std::cout << "デストラクタ: " << this << std::endl;
}

void copy(Maker m)
{
    std::cout << "copy: " << &m << std::endl;
}
void reference(const Maker& m)
{
    std::cout << "reference: " << &m << std::endl;
}

int main()
{
    Maker m;
    std::cout << "値渡し前" << std::endl;
    copy(m);
    std::cout << "値渡し後" << std::endl;

    std::cout << "参照渡し前" << std::endl;
    reference(m);
    std::cout << "参照渡し後" << std::endl;

}
