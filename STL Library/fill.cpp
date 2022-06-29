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
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::fill(v.begin(), v.end(), -1);
    Print(v);
}