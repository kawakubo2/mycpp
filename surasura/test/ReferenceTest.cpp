#include <iostream>

void increment(int& n)
{
  n++;
}

int main()
{
  int num = 10;
  increment(num);
  std::cout << num << std::endl;
}

