/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/28 01:15:49 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 23:42:02 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlcat(char *restrict dst,
						const char *restrict src, size_t size)
{
	char		*d_ptr;
	char		*s;
	size_t		i;
	size_t		dlen;

	d_ptr = dst;
	s = (char *)src;
	i = size;
	while (i-- != 0 && *d_ptr)
		d_ptr++;
	dlen = d_ptr - dst;
	i = size - dlen;
	if (i == 0)
		return (dlen +ft_strlen(s));
	while (*s)
	{
		if (i-- != 1)
			*d_ptr++ = *s;
		s++;
	}
	*d_ptr = '\0';
	return (s + dlen - src);
}
