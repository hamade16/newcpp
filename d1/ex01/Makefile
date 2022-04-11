# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 14:56:53 by houbeid           #+#    #+#              #
#    Updated: 2022/02/23 21:41:36 by houbeid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		zombie
CC			=		clang++
CPPFLAGS	=		-g -Wall -Wextra -Werror
SRC			=		zombieHorde.cpp Zombie.cpp main.cpp

all:			$(NAME)

$(NAME): $(SRC)
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean:
		@/bin/rm -rf $(NAME) 2&> /dev/null && echo "\033[1;31mRemoved object files\033[0m"

re:			clean all

.PHONY:		all clean