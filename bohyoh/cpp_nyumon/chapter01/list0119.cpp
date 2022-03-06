#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "名前: ";
    getline(cin, name);
    cout << "こんにちは、" << name << "さん。\n";
}