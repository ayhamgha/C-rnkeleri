#include <iostream>
#include <vector>
#include <fstream>
int main()
{
    std::string file_name = "image.dat";
    std::ofstream file(file_name, std::ios_base::out | std::ios_base::binary);
    int rows = 2;
    int cols = 3;
    std::vector<float> vec(rows * cols);
    file.write(reinterpret_cast<char *>(&rows), sizeof(rows));
    file.write(reinterpret_cast<char *>(&cols), sizeof(cols));
    file.write(reinterpret_cast<char *>(&vec.front()), vec.size() * sizeof(float));
    return 0;
}