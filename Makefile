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
