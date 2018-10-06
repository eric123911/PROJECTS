/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/22 17:51:25 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 00:51:29 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d_ptr;
	char	*s_ptr;
	size_t	i;

	i = -1;
	d_ptr = (char *)dst;
	s_ptr = (char *)src;
	if (s_ptr < d_ptr)
		while ((int)--len >= 0)
			*(d_ptr + len) = *(s_ptr + len);
	else
		while (++i < len)
			*(d_ptr + i) = *(s_ptr + i);
	return (dst);
}
