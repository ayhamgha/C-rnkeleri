#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string line, file_name;
    std::ifstream input("test_bel.txt", std::ios_base::in);
    // Read data line-wise.
    while (getline(input, line))
    {
        std::cout << "Read: " << line << std::endl;
        // String has a find method.
        std::string::size_type loc = line.find("filename", 0);
        if (loc != std::string::npos)
        {
            file_name = line.substr(line.find("=", 0) + 1, std::string::npos);
        }
    }
    std::cout << "Filename found: " << file_name << std::endl;
    return 0;
}