/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/30 14:35:47 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 16:26:01 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*c_ptr;
	unsigned char		ind;

	ind = (unsigned char)c;
	c_ptr = (const unsigned char *)s;
	while (*c_ptr)
	{
		if (*c_ptr == ind)
			return ((void *)c_ptr);
		//else if (*c_ptr == '\0')
		//	return ((void *)c_ptr);
		c_ptr++;
	}
	return (0);
}
