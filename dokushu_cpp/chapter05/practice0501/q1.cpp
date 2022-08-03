#include <iostream>

void reverse(int* ptr, int num)
{
    for (int i = 0; i < num / 2; i++) {
        int temp = ptr[num - 1 - i];
        ptr[num - 1 - i] = ptr[i];
        ptr[i] = temp;
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    reverse(numbers, 5);
    for (int n: numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}