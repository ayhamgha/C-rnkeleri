#include <iostream>
#include <array>
#include <algorithm>
void Print(std::array<int, 10> data)
{

    for (int i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    std::cout << "Before sorting: ";
    Print(s);
    std::sort(s.begin(), s.end());
    std::cout << "After soring: ";
    Print(s);
    return 0;
}