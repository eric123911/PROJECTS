/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/22 15:37:20 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/22 17:56:13 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*t1;
	const char	*t2;

	if (n == 0 || !dest || !src)
		return (NULL);
	t1 = dest;
	t2 = src;
	while (n-- > 0)
		*t1++ = *t2++;
	return (dest);
}
