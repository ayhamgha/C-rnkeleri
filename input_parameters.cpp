#include <iostream>
#include <string>
/*By default:
argc == 1
argv == "<binary_path>"*/
int main(int argc, char const *argv[])
{ // Print how many parameteres we received

    std::cout << "Got " << argc << " params\n";
    // First program argument is always the program name
    std::cout << "Program: " << argv[0] << std::endl;
    for (int i = 1; i < argc; ++i)
    {
        std::cout << "Param: " << argv[i] << std::endl;
    }
    return 0;
}