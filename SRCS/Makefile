NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
LIBC = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(OBJ)
			$(LIBC) $(NAME) $(OBJB)

clean:
	rm  -f $(OBJ)
	rm  -rf $(OBJ) $(NAME) *~

fclean: clean
	rm -rf $(NAME)

re: fclean all
	$(make)

debug: $(CMAKEDIR) $(CMAKEDIR)Makefile
		$(MAKE) -C $(CMAKEDIR) libftdebug

test: all

.PHONY: all clean fclean re bonus
