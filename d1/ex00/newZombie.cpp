#include "Zombie.h"

Zombie* newZombie(std::string name)
{
    Zombie* instance1 = new Zombie(name);
    return (instance1);
}