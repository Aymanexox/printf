# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 01:35:09 by asebrani          #+#    #+#              #
#    Updated: 2023/12/13 20:56:15 by asebrani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rcs

SRC = ft_pointer.c ft_putchar.c ft_putdigit.c ft_putstr.c ft_put__x.c ft_print_format.c ft_printf.c 

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

$(NAME):$(OBJ)
		$(AR) $(NAME) $(OBJ)

all:	$(NAME)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS)  -c  $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


