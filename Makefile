# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 14:55:17 by hyunski2          #+#    #+#              #
#    Updated: 2024/03/10 14:55:21 by hyunski2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcus
RANLIB  = ranlib

NAME	= libft.a
HEAD	= libft.h
SRCS	= ft_strlen.c

OBJS	= $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
