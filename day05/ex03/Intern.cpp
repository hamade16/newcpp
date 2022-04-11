#include "Intern.hpp"

Intern::Intern()
{

}



Intern::Intern(Intern const & src)
{
    *this = src;
    return ;
}

Intern  Intern::operator=(Intern const &)
{
    
    return *this;
}

Form    *Intern::makeForm(std::string name, std::string target)
{
    std::string array[3] = {"robotomy request", "shrubbery creaction", "presidential pardon"};

    typedef Form* ( Intern::*Frm )( std::string target );
    Frm funcPtr[3] = { &Intern::robotomy, &Intern::shrubbery, &Intern::Presidential};
   for (int i = 0; i < 3; i++)
   {
       if (name == array[i])
        {  
            return (this->*funcPtr[i])( target );
        }
   }

    std::cout << name << " machi Form a leghlawi" << std::endl;
    return NULL;
}

Form    *Intern::robotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form    *Intern::shrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form    *Intern::Presidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

Intern::~Intern()
{

}

