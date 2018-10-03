/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/20 15:57:43 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:48:08 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long unsigned int	sign;
	long int			nb;

	nb = 0;
	while (*str < 33)
		str++;
	sign = *str == '-' ? 1 : 0;
	*str == '-' || *str == '+' ? str++ : 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (sign ? -nb : nb);
}
