#include <iomanip>
#include <iostream>
#include <fstream>

int main()
{
    std::string filename = "out.txt";
    std::ofstream outfile(filename);
    if (!outfile.is_open())
    {
        return EXIT_FAILURE;
    }
    double a = 1.123123123;
    outfile << "Just string" << std::endl;
    outfile << std::setprecision(20) << a << std::endl;
    return 0;
}