# ex00 Makefile
NAME = ex00
SRC = main.cpp
OBJDIR = obj
OBJ = $(OBJDIR)/main.o
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
