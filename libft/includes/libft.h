#ifndef LIBFT_H
# define LIBFT_H

// SYSTEM LIBRARIES
# include <unistd.h>


// LibMEM PROTOTYPES
void	ft_swap(int *a, int *b);

// LibNUMBERS PROTOTYPES
int		ft_atoi(char *str);
void	ft_putnbr(int n);

// LibPRINT PROTOTYPES
void	ft_putchar(char c);
void	ft_putstr(char *str);

// LibSTRINGS PROTOYPES
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_toupper(int c);

// LibUTIL PROTOTYPES
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

#endif
