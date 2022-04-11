#include "Zombie.h"

Zombie::Zombie()
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << name << " is destroyed" << std::endl;
    return ; 
}

void    Zombie::annonce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}