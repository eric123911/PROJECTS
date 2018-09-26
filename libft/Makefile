NAME	= libft.a
FLAGS = -Wall -Werror -Wextra
CFLAGS	= $(FLAGS) -Iincludes -c
FILES	= $(shell find 	./LibMem \
						./LibNumbers \
						./LibPrint \
						./LibStrings \
						./LibUtil \
-name "*.c")


all: build $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(shell find ./build -name "*.o")
	ranlib $(NAME)
	@echo -e "\033[32mLIBFT COMPILED ✓\033[0m"

build:
	mkdir -p build
	gcc $(CFLAGS) $(FILES)
	mv *.o ./build/

clean:
	rm -rf ./build
	@echo -e "\033[31mbuild folder deleted\033[0m"

fclean: clean
	rm -f $(NAME) test
	@echo -e "\033[31m$(NAME) deleted\033[0m"

re: fclean all

test: re
	gcc -o test $(FLAGS) -Iincludes main.c $(NAME)
	@echo -e "\033[32mMAIN TEST COMPILED\033[0m"
	@echo -e "\n\n\n"

.PHONY: clean fclean all re
