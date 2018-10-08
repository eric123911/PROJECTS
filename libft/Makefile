NAME	= libft.a
DNAME	= libft.so
FLAGS	= -Wall -Werror -Wextra
CFLAGS	= $(FLAGS) -Iincludes -c
FILES	= $(shell find ./ -name "*.c")
OBJ		= $(FILES:.c=.o)


all: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)											#Dynamic libmy.so
	ranlib $(NAME)
	gcc -shared -fPIC -Wl,-soname,$(DNAME) -o $(DNAME) $(OBJ) -lc	#Static libmy.a
	@echo -e "\033[32mLIBFT COMPILED ✓\033[0m"

$(OBJ):
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	@echo -e "\033[31mobject files deleted\033[0m"

fclean: clean
	rm -f $(NAME) $(DNAME)
	@echo -e "\033[31m$(NAME) && $(DNAME) deleted\033[0m"

re: fclean all

.PHONY: clean fclean all re
