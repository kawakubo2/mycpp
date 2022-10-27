#include <type_traits>

template <typename T>
class vector2d
{
    static_assert(std::is_signed<T>::value, "Tは符号を扱える整数型である必要があります");

    T x;
    T y;
public:

};

int main()
{
    vector2d<float> vf;
    vector2d<int> vi;
    // vector2d<unsigned int> vu; 符号を扱えない型のため、コンパイルエラーとなる
}