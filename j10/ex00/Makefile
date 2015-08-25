# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 09:47:42 by mabordas          #+#    #+#              #
#    Updated: 2015/08/20 18:04:36 by mabordas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ../srcs/ft_putchar.c \
	  ../srcs/ft_putstr.c \
	  ../srcs/ft_strcmp.c \
	  ../srcs/ft_strlen.c \
	  ../srcs/ft_swap.c \
HEADERS = ../includes/ft.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(SRC:.c=.o)

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
