#include "PresidentialPardonForm.hpp"

 PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("robotomy request", 72, 45), _target(target)
{

    
}

 PresidentialPardonForm:: PresidentialPardonForm()
{
    
}

 PresidentialPardonForm:: PresidentialPardonForm( PresidentialPardonForm  const & src) : Form(src)
{

}

 PresidentialPardonForm   PresidentialPardonForm::operator=( PresidentialPardonForm const & src)
{
    Form::operator=(src);
    this->_target = src._target;
    return (*this);
}

 PresidentialPardonForm::~ PresidentialPardonForm()
{

}

void     PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    std::cout << "The form " << this->_target << " was executed!" << std::endl;
}