/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isprint.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/20 16:05:30 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 13:56:01 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
