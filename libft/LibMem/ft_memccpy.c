/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/22 17:41:43 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/22 17:55:51 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	t;
	char			*t1;
	const char		*t2;

	if (n == 0 || !dest || !src)
		return (NULL);
	t = (unsigned char)c;
	t1 = dest;
	t2 = src;
	while (n-- > 0)
	{
		*t1 = *t2;
		if (*t1++ == t)
			return (dest);
		t2++;
	}
	return (NULL);
}
