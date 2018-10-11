/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 03:34:14 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 13:36:57 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countw(char *s, char c)
{
	//char 	*str;
	int				i;
	int				j;
	unsigned int	nb;

	i= -1;
	nb = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			i +=j;
			nb++;
		}
	}
	return (nb + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**s_ptr;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s || !c)
		return (0);
	if (NULL == (s_ptr = ft_memalloc(sizeof(char *) * ft_countw((char *)s, c))))
		return (NULL);
//	printf("%i\n", ft_countw((char *)s, c));
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			s_ptr[j++] = ft_strsub(s, i, len);
			i += len;
		}
	}
//	printf("%d", j);
	s_ptr[j] = NULL;
	return (s_ptr);
}


int		main(int ac, char **av)
{
	int i = 0;
	char	**tab;

	if (ac == 3)
	{
		tab = ft_strsplit(av[1], av[2][0]);
		while (tab[i])
			printf("%s\n", tab[i++]);
	}
}
