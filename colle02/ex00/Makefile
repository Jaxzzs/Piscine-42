# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/23 18:57:28 by rfernand          #+#    #+#              #
#    Updated: 2015/08/23 20:08:41 by rfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

LIB = libft.a

SOURCE = colle_02_00.c colle_02_01.c colle_02_02.c colle_02_03.c colle_02_04.c \
		 ft_display_strcmp.c ft_check_entry.c ft_other.c

OBJET = colle_02_00.o colle_02_01.o colle_02_02.o colle_02_03.o colle_02_04.o \
		ft_display_strcmp.o ft_check_entry.o ft_other.o

all: $(NAME)

$(NAME): $(LIB)
	gcc -Wall -Werror -Wextra -o $(NAME) main2.c $(LIB)

$(LIB):
	gcc -c $(SOURCE)
	ar rc $(LIB) $(OBJET)
	ranlib $(LIB)

clean:
	rm -f $(OBJET)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)

re : fclean all
