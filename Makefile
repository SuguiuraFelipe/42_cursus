NAME = libft.a
SRC = $(filter-out main.c, $(wildcard *.c))
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
MAIN = main

all: $(NAME) $(MAIN)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.PHONY: $(MAIN)

$(MAIN): $(NAME)
	$(CC) $(CFLAGS) -I. $(MAIN).c -L. -lft -o $(MAIN) && ./$(MAIN)

%.o:%.c
	$(CC) $(CFLAGS) -I. -c $< -o $@
	
clean:
	rm -f $(OBJS) $(MAIN)

fclean: clean
	rm -f $(NAME)

re: fclean all