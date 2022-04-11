
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class Form;

class Bureaucrat {

	private:
		const std::string		_name;
		int						_grade;

	public:
								Bureaucrat ( void );
								Bureaucrat ( std::string name, int grade );
								Bureaucrat ( const Bureaucrat& b );
		Bureaucrat&				operator= ( const Bureaucrat& b );
								~Bureaucrat ( void );

		std::string				getName ( void ) const;
		int						getGrade ( void ) const;
		void					incrementGrade ( void );
		void					decrementGrade ( void );
		 void					signForm(Form const &b);

	class GradeTooHighException : public std::exception {

		public:
			virtual const char* what() const throw()
			{
				return "GRADE WAS BENEATH 0!";
			}

	};

	class GradeTooLowException : public std::exception {

		public:
			virtual const char* what() const throw()
			{
				return "GRADE WAS ABOVE 150!";
			}

	};

};

std::ostream&					operator<< ( std::ostream& os, const Bureaucrat& b);

#endif
