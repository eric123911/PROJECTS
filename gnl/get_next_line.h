/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/13 02:07:31 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 03:09:11 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 666666
# include "./libft/libft.h"

typedef struct		s_line
{
	int				fd;
	char			*stock;
	struct s_line	*next;
}					t_line;

int	get_next_line(const int fd, char **line);

#endif
