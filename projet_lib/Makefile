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

SRCS = $(wildcard ft_*.c)
OBJ = $(SRCS:.c=.o)  
NAME = libft.a
RM = /bin/rm -f
CC = clang
FLAGS = -Wall -Wextra -Werror

%.o: %.c 
	$(CC) -c $(FLAGS) $<

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
