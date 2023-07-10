NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)



%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	$(make)

debug: $(CMAKEDIR) $(CMAKEDIR)Makefile
		$(MAKE) -C $(CMAKEDIR) libftdebug

test: all

.PHONY: all clean fclean re bonus
