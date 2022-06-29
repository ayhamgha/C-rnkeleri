#include <iostream>
#include <fstream> //For the file streams.
#include <string>

int main()
{
    int i;
    double a, b;
    std::string s;
    // Create an input file stream.
    std::ifstream in("test_cols.txt", std::ios_base::in);
    // Read data, until it is there.
    while (in >> i >> a >> s >> b)
    {
        std::cout << i << ", " << a << ", "  << s << ", " << b << std::endl;
    }
    return (0);
}