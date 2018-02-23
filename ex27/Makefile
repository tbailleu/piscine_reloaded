# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbailleu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 17:43:57 by tbailleu          #+#    #+#              #
#    Updated: 2017/11/07 17:43:58 by tbailleu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Werror -Wextra

NAME=ft_display_file

SRC=ft_display_file.c

OBJ=$(SRC:.c=.o)

$(NAME): 
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)