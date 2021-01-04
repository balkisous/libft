# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 09:58:26 by bben-yaa          #+#    #+#              #
#    Updated: 2020/12/23 11:54:44 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = *.c
RM = /bin/rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

	$(CC) -c $(FLAGS) $(NAME)
	ar rcs libft.a *.o
	$(CC) -o -L -libft
clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
