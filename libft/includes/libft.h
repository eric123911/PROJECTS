#ifndef LIBFT_H
# define LIBFT_H

// SYSTEM LIBRARIES
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

// LibMEM PROTOTYPES
void	ft_swap(int *a, int *b);
// LibNUMBERS PROTOTYPES
int		ft_atoi(char *str);
void	ft_putnbr(int n);
// LibPRINT PROTOTYPES
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putstr(char *str);
// LibSTRINGS PROTOYPES
void	ft_bzero(void *s, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
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
