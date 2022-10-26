# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:33:41 by rmorais           #+#    #+#              #
#    Updated: 2022/10/25 19:03:16 by rmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VARIABLE

NAME := libft.a
CC	:= gcc
CFLAGS 	:= -Wall -Wextra -Werror -c
OBJ	:= $(patsubst %.c, %.o,$(wildcard *.c))

all: $(NAME)

$(NAME): $(OBJ) | libft.h 
	ar -crs libft.a *.o
%.o: %.c
	$(CC) $(CFLAGS) $^

#Remove the object files after the creation of libft.a

.PHONY : clean

clean: 
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

