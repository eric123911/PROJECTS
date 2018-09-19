SRC = $(shell find . -name "*.c")
OBJ = $(SRC:.c=.o)
INC = ../includes/
CC = gcc -g3 -Wall -Wextra -Werror


all: $(OBJ)

$(OBJ):
	$(CC) -I$(INC) -c $(SRC)

fclean:
	rm -f $(OBJ)

re: fclean all
