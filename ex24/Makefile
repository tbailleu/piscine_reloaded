# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbailleu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:17:47 by tbailleu          #+#    #+#              #
#    Updated: 2017/11/07 16:17:50 by tbailleu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc $(CFLAGS)

CFLAGS=-Wall -Werror -Wextra

NAME=libft.a

SRC_DIR=srcs/

SRC=ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ=$(SRC:.c=.o)

$(NAME): 
		$(CC) -c $(patsubst %,$(SRC_DIR)%,$(SRC)) -I includes/
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
