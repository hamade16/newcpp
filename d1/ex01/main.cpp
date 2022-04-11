#include "zombie.h"


int main()
{
    int i = 0;
    zombie* instance = zombieHorde(5, "hamade");
    while(i < 5)
    {
        instance[i].annonce();
        i++;
    }
    delete [] instance;
    return (0);
}




160.25.44.88   =>160.25.44.01011000     160.25.44.0  ====>160.25.44.127
255.255.255.128 => 255.255.255.10000000   160.25.44.1 ===> 160.25.44.126