#include "replace.hpp"

std::string replace(std::string read, std::string s1, std::string s2)
{
    std::string res;
    std::string tmp;

    std::size_t found = read.find(s1);
    tmp = "";
    while (found != std::string::npos)
    {
        res = "";
        tmp = tmp + read.substr(0, found);
        tmp = tmp + s2;
        res = read.substr(found + s1.size(), read.size() - found - s1.size());
        read = res;
        found = read.find(s1);
    }
    tmp = tmp + read;

    return tmp;
}