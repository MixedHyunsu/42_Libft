CC	= gcc
CFLAGE = -Wall -Werror -Wextra
AR = ar rcus
RANLIB  = ranlib

NAME	= libft.a
HEAD	= libft.h
SRCS	= ft_strlen.c

OBJS	= $(ARCS:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re:		fclean all
