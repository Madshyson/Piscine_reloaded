#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 15:56:05 by mlavanan          #+#    #+#              #
#    Updated: 2016/11/22 12:03:25 by mlavanan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECT = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I ./includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean	all