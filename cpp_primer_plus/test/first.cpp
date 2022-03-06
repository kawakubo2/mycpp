#include <iostream>

int main()
{
	int n1, n2;
	std::cout << "2つの整数を入力してください: " << std::endl;
	std::cin >> n1 >> n2;

	std::cout << "2つの整数の和は" << (n1 + n2) <<  "です。" << std::endl;

	return 0; 
}
