#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

class Human
{
public:
    Human(int kindness) : kindness_{kindness} {}
    bool operator<(const Human &other) const
    {
        return kindness_ < other.kindness_;
    }

private:
    int kindness_ = 100;
};
int main()
{
    std::vector<Human> humans = {Human{0}, Human{10}};
    std::sort(humans.begin(), humans.end());
    // std::cout << humans.front() << std::endl;
    return 0;
}