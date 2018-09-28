/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/22 18:15:40 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/28 17:21:02 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*sp1;
	const char	*sp2;

	if (n < 1 || !s1 || !s2)
		return (0);
	sp1 = s1;
	sp2 = s2;
	while (--n > 0 && *sp1 == *sp2)
	{
		sp1++;
		sp2++;
	}
	return (*sp1 - *sp2);
}
