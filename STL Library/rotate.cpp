#include <iostream>
#include <vector>
#include <algorithm>
void Print(std::vector<int> data)
{

    for (int i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Before rotate: ";
    Print(v);

    std::rotate(v.begin(), v.begin() + 5, v.end());
    std::cout << "After rotate: ";
    Print(v);
}