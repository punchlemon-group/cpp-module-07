# ex01 Makefile
NAME = ex01
SRC = main.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
