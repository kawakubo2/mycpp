#include <iostream>
#include <initializer_list>

template <typename T>
class Container
{
    T* ptr = nullptr;
    std::size_t count = 0;
public:
    explicit Container(const T& init, std::size_t count);
    Container(std::initializer_list<T> init);
    ~Container() { delete [] ptr; }
    void show() const;
};

template <typename T>
Container<T>::Container(const T& init, std::size_t count)
    : ptr{new T[count]}, count{count}
{
    for (std::size_t i = 0; i < count; i++) {
        ptr[i] = init;
    }
}

template <typename T>
Container<T>::Container(std::initializer_list<T> init)
    : ptr{new T[init.size()]}, count{init.size()}
{
    std::size_t i = 0;
    for (auto& e: init)
    {
        ptr[i++] = e;
    }
}

template <typename T>
void Container<T>::show() const
{
    for (std::size_t i = 0; i < count; i++)
    {
        std::cout << ptr[i] << std::endl;
    }
}

int main()
{
    // コンパイラが対応できていないため、型を指定した。
    Container<std::string> s{std::string{"Hello"}, 3};
    s.show();

    std::cout << std::endl;

    // コンパイラが対応できていないため、型を指定した。
    Container<int> i = { 0, 1, 2, 3 };
    i.show();
}