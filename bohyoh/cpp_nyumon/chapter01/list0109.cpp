#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "xの値: ";
    cin >> x;
    cout << "yの値: ";
    cin >> y;

    cout << "x + y = " << x + y << "\n";
    cout << "x - y = " << x - y << "\n";
    cout << "x * y = " << x * y << "\n";
    cout << "x / y = " << x / y << "\n";
    cout << "x % y = " << x % y << "\n";

    cout << "(x / y) * y + (x % y) = " << (x / y) * y + (x % y) << "\n";
}