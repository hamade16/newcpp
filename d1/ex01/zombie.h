#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class zombie
{
    public:
        void    annonce(void);
        zombie(void);
        ~zombie(void);
        void    setname(std::string Name);
    private:
        std::string name;

};

zombie* zombieHorde(int n, std::string name);

#endif