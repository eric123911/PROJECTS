/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 03:27:31 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 00:43:46 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
//	char			*s_ptr;
	size_t			len;
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_isblank(s[len]))
		len--;
	if (len < i)
		return (ft_strdup(""));
	return (ft_strsub(s, i, len - (size_t)i + 1));
}
