#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    const int n1 = 3;
    std::vector<int> v{0, 1, 2, 3, 4};
    auto result1 = std::find(v.begin(), v.end(), n1);
    if (result1 != std::end(v))
    {
        std::cout << "v contains: " << n1 << std::endl;
    }
    else
    {
        std::cout << "v does not contain: " << n1 << std::endl;
    }
}