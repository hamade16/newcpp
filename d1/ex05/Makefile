# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 14:56:53 by houbeid           #+#    #+#              #
#    Updated: 2022/03/20 03:45:34 by houbeid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		Karen
CC			=		c++
CPPFLAGS	=		-Wall -Wextra -Werror
SRC			=		main.cpp Karen.cpp

all:			$(NAME)

$(NAME): $(SRC)
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean:
		@/bin/rm -rf $(NAME) 2&> /dev/null && echo "\033[1;31mRemoved object files\033[0m"

re:			clean all

.PHONY:		all clean