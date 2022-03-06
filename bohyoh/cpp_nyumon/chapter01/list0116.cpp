#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout << "乱数の最大値" << RAND_MAX << "\n";
    srand(time(NULL));
    int lucky = rand() % 1000;
    cout << "今日のラッキーナンバーは" << lucky << "です。\n";
}