#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        void    annonce(void);
        Zombie();
        Zombie (std::string name);
        ~Zombie(void);


};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif