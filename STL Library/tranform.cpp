#include <iostream>
#include <string>
#include <algorithm>

auto UpperCase(char c)
{
    return std::toupper(c);
}
    int main()
    {
        const std::string s("hello");
        std::string S{s};
        std::transform(s.begin(), s.end(), S.begin(), UpperCase);
        std::cout << s << std::endl;
        std::cout << S << std::endl;
    }
