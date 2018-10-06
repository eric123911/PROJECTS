/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 10:12:09 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 02:59:44 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	if (NULL == (cpy = malloc(sizeof(*s) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	i = -1;
	while (s[++i])
		cpy[i] = s[i];
	cpy[i] = '\0';
	return (cpy);
}
