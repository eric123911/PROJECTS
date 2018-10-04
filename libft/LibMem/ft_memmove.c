/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/22 17:51:25 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:56:27 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;

	if (len == 0 || dst == src)
		return (NULL);
	str = (unsigned char *)dst;
	//str = (unsigned char *)malloc(sizeof(str) * len);
	//str = NULL;
	ft_memcpy(str, src, len);
	//str = ft_memcpy(dst, src, len);
	return (dst);
}
