#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> v{0, 1, 2, 3, 4, 4, 3, 7, 8, 9, 10};
    const int n1 = 3;
    const int n2 = 5;
    int num_items1 = std::count(v.begin(), v.end(), n1);
    int num_items2 = std::count(v.begin(), v.end(), n2);

    std::cout << n1 << " count: " << num_items1 << std::endl;
    std::cout << n2 << " count: " << num_items2 << std::endl;
}