#include <iostream>

using namespace std;

int main()
{
    int x = 3.5; // int型に小数点を代入してもエラーにならず、小数点が切り捨てられる。
    int y = 4.5;

    cout << x << "+" << y << "=" << x + y << "\n";
}