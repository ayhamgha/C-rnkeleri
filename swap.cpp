#include <iostream>

int main()
{
    int a = 3;
    int b = 5;
    std::cout << "Before Swap: " << a << " " << b << std::endl;
    std::swap(a, b);
    std::cout << "After Swap: " << a << " " << b << std::endl;
}