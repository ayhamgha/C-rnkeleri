#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
void Print(std::vector<int> data)
{

    for (int i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
inline bool even(int i)
{
    return i % 2 == 0;
}
int main()
{
    std::vector<int> v(10, 2);
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
    Print(v);
    bool all_even = all_of(v.cbegin(), v.cend(), even);
    
        if (all_even)
        {
            std::cout << "All numbers are even" << std::endl;
        }
    
}