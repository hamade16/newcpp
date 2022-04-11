#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac  != 4)
    {
        std::cout << "number of arguments is not valid" << std::endl;
        return (1);
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string read;

    std::ifstream file (filename);

    if ( !file.is_open() )
    {
        std::cout << "DOESNT EXIST" << std::endl;
        return (1);
    }

    std::ofstream file1;

    file1.open(filename + ".replace");
    while (getline(file, read))
    {
        read = replace(read, s1, s2);
    
        file1 << read << std::endl;
    }
    file1.close();
}
