#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

//It is not working 
//Problem with multiplies
int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = std::accumulate(v.begin(), v.end(), 0);
    int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies());
    std::cout << "Sum  : " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
}