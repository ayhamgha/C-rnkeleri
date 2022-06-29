#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums{3, 4, 2, 8, 15, 267};
    auto print = [](const int &n)
    { std::cout << " " << n; };
    std::cout << "Numbers:";
    std::for_each(nums.cbegin(), nums.cend(), print);
    std::cout << std::endl;
    return 0;
}