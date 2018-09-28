/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/26 20:52:05 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/28 17:17:52 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	unsigned int	i;

	i = 1;
	while (*src && i < (unsigned int)n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = *src;
	return (dest);
}
