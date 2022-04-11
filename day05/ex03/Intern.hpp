#ifndef INTERN_HPP
# define INTERN_HPP


#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.h"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        Intern operator=(Intern const &);
        ~Intern();
        Form    *makeForm(std::string name, std::string target);

    private:
        Form    *robotomy(std::string target);
        Form    *shrubbery(std::string target);
        Form    *Presidential(std::string target);
};

#endif