/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/26 20:52:05 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 01:16:52 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*tmp;
	if (!n)
		return (dest);
	tmp = dest;
	while (n--)
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = 0;
	return (tmp);
}
