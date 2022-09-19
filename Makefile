# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 02:16:58 by bsirikam          #+#    #+#              #
#    Updated: 2022/09/19 16:43:51 by bsirikam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printf_util.c ft_printf_util2.c

#SRC_B = 

OBJ = $(SRC:.c=.o)
#OBJ_B = $(SRC_B:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

# bonus: all
# 	$(CC) $(CFLAGS) -c $(SRC_B)
# 	ar rcs $(NAME) $(OBJ_B)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all