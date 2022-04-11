NAME			=	Form
CC				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98
SRCS			=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp 

all		:	$(NAME)

$(NAME)	:	$(SRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean	:
	@@/bin/rm -f $(NAME) && echo "\033[1;31mRemoved executable\033[0m"

re		:	clean all
	./$(NAME)

.PHONY	:	re clean all
