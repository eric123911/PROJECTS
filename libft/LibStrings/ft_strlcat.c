/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 12:46:41 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/30 13:59:26 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		if (i < (unsigned int)size - 1)
			dest[i] = src[j];
		i++;
		j++;
	}
	dest[i - 1] = '\0';
	dest = ft_strcat(dest, src);
	return (ft_strlen(src));
}
