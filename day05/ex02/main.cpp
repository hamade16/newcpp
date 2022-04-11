#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		srand (time(NULL));
		Bureaucrat c("bureau", 30);
		PresidentialPardonForm abc("hamade");
		abc.beSigned( c );
		//abc.execute(c);
		abc.execute(c);
        //f.beSigned(c);
		// c.signForm(f);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}