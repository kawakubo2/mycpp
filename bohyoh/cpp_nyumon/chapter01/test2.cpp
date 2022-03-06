#include <iostream>

using namespace std;

int main()
{
    int x; // int型に小数点を代入してもエラーにならず、小数点が切り捨てられる。
    int y;

    cout << x << "+" << y << "=" << x + y << "\n";
}