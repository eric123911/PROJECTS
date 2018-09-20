/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/20 14:58:33 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/20 14:58:36 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str)
  {
    str++;
    i++;
  }
  return (i);
}
