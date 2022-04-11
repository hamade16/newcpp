#include "Zombie.h"

int main()
{
    Zombie instance("hamade");
    instance.annonce();
    Zombie* instance1 = newZombie("oubeid");
    instance1->annonce();
    randomChump("ahmedou"); 
    delete instance1;
    return (0);
}