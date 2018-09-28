/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/28 16:46:56 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/28 17:03:01 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strncat(char *dest, char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;

	// todo: reproduce all aspects of man
	while (src[++j])
	{
		if (j < (unsigned int)n)
			dest[i + j] = src[j];
		else
			return (dest);
	}
	dest[i + j] = src[j];
	return (dest);
}
