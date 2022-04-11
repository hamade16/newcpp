# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 14:56:53 by houbeid           #+#    #+#              #
#    Updated: 2022/02/23 23:00:51 by houbeid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		Weapon
CC			=		clang++
CPPFLAGS	=		-Wall -Wextra -Werror
SRC			=		main.cpp Humana.cpp HumanB.cpp Weapon.cpp

all:			$(NAME)

$(NAME): $(SRC)
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean:
		@/bin/rm -rf $(NAME) 2&> /dev/null && echo "\033[1;31mRemoved object files\033[0m"

re:			clean all

.PHONY:		all clean