# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 09:58:26 by bben-yaa          #+#    #+#              #
#    Updated: 2021/02/15 14:04:25 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	   ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
	   ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	   ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	   ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
	   ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	   ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strrchr.c
OBJ = $(SRCS:.c=.o) 
NAME = libft.a
RM = /bin/rm -f
CC = clang
FLAGS = -Wall -Wextra -Werror
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c \
	     ft_lstadd_back.c
OBJ_BONUS = $(SRCS_BONUS:.c=.o)

%.o: %.c 
	$(CC) -c $(FLAGS) $<

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS) $(OBJ)
