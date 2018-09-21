/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 10:12:09 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/21 10:48:44 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc(sizeof(*s) * (ft_strlen((char *)s) + 1));
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
