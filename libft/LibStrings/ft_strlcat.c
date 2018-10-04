/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/28 01:15:49 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 16:21:07 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlcat(char *restrict dst,
						const char *restrict src, size_t size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = -1;
	while (dst[i])
		i++;
	while (j < (int)size && src[++j])
		dst[i + j] = src[j];
	dst[i + j] = src[j];
	return (ft_strlen(dst));
}
