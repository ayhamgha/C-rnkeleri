#include <iostream>
#include <fstream>
using Mode = std::ios_base::openmode;
int main()
{
    // if stream: stream for input from file.
    std::ifstream f_in(std::string & file_name, Mode mode);
    // ofstream: stream for output to file.
    std::ofstream f_out(std::string & file_name, Mode mode);
    // fstream for input and ouput to file.
    std::fstream f_in_out(std::string & file_name, Mode mode);
}