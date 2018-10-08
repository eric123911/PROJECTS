/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/20 15:57:43 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 04:40:56 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				s;
	unsigned int	nb;

	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	s = *str == '-' ? 1 : 0;
	*str == '-' || *str == '+' ? str++ : 0;
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
//	if (nb > 2147483649 || (s == 1 && nb > 2147483647))
//		return (-1);
	return (s ? -nb : nb);
}
