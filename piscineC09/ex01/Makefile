# Makefile

NAME = libft.a
CC = gcc -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c
HEADER = includes/
OBJECT_FILES = $(SRC:.c=.o)


all: $(NAME) 

.c.o:
	$(CC) -I $(HEADER) -c  $< -o $(<:.c=.o)

$(NAME): $(OBJECT_FILES)
	ar cr $(NAME) $(OBJECT_FILES) 

clean:
	rm -rf $(OBJECT_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all



	




