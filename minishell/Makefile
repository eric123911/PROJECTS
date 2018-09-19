# Project name
NAME = $(BUILDDIR)/minishell

# Project builds and dirs
SRCDIR = ./src/
SRCNAMES = $(shell find $(SRCDIR) -name "*.c")
OBJNAMES = $(SRCNAMES:.c=.o)
INC = ./includes/
BUILDDIR = ./build

# Libft and dirs
LIBDIR = ./libft
LIBFT = $(LIBDIR)/libft.a
LIBINC = $(LIBDIR)/includes

# Optimization and Compiler flags
CFLAGS = -Wall -Wextra -Werror
CC = gcc $(DEBUG) $(CFLAGS)

# Debugging flags
DEBUG = -g3


# Main rule
all: $(BUILDDIR) $(NAME)

# Object dir rule
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Objects rule
$(BUILDDIR)%.o: $(SRCDIR)%.c
	$(CC) -I$(LIBINC) -I$(INC) -o $@ -c $<


# Dot .o rule
$(OBJNAMES):
	make -C $(SRCDIR) all

# Libft rule
$(LIBFT):
	make -C $(LIBDIR)

# Project file rule
$(NAME): $(OBJNAMES) $(LIBFT)
	$(CC) -o $(NAME) $(OBJNAMES) $(LIBFT)



# Cleaning up the build files
clean:
	rm -rf $(BUILDDIR)
	make -C $(LIBDIR) clean

# Getting rid of the project file
fclean: clean
	rm -f $(NAME)
	make -C $(LIBDIR) fclean

# Do both of the above
re: fclean all

# Just in case those files exist in the root dir
.PHONY: all fclean clean re
