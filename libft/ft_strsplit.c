/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 03:34:14 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 03:45:56 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**s_ptr;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s || !c)
		return (0);
	if (NULL == (s_ptr = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
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
	s_ptr[j] = 0;
	return (s_ptr);
}
