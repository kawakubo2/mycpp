#include <iostream>

int main()
{
    int num = 5;
    int numbers[5] = {10, 20, 30, 40, 50};
    int* ptr = numbers;
    while (num > 0) {
        std::cout << *ptr++ << std::endl;
        num--;
    }

}