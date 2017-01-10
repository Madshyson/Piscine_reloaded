#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 14:31:58 by mlavanan          #+#    #+#              #
#    Updated: 2016/11/24 10:07:38 by mlavanan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

FILE = ./main.c

HEADER = ./ft_display_file.h

OBJECT = ./main.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FILE) $(HEADER)
	gcc $(FLAGS) -o $(NAME) $(OBJECT)
	/bin/rm -f ft_display_file.h.gch

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
