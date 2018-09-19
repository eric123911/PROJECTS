/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 17:24:03 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/27 08:44:29 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(char *str)
{
	unsigned int	sign;
	int		nb;

	nb = 0;
	while (*str < 33)
		str++;
	sign = *str == '-' ? 1 : 0;
	*str == '-' || *str == '+' ? str++ : 0;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + *str - '0', str++;
	return (sign ? -nb : nb);
}
