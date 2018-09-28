/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 17:25:54 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/28 17:09:04 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
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
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *s);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, char *src, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
// LibUTIL PROTOTYPES
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
#endif
