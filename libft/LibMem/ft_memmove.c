/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/22 17:51:25 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/28 17:22:06 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;

	if (n == 0 || !dest || !src || dest == src)
		return (NULL);
	str = (unsigned char *)malloc(sizeof(str) * n);
	ft_memcpy(str, src, n);
	ft_memcpy(dest, str, n);
	free(str);
	return (dest);
}
