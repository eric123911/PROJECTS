/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/13 01:41:17 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 17:06:44 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static	t_line	*ft_initlist(t_line *list, const int fd)
{
	t_line	*a;
	t_line	*b;

	a = list;
	b = NULL;
	while (list && list->fd != fd)
	{
		b = list;
		list = list->next;
	}
	if (!list)
	{
		if (NULL == (list = ft_memalloc(sizeof(t_line))))
			return (NULL);
		list->fd = fd;
	}
	if (b)
		b->next = list->next;
	if (list != a)
		list->next = a;
	return (list);
}

static int		ft_end_gnl(t_line *list, char **line, char *buf)
{
	ft_strdel(&buf);
	if (**line)
		return (1);
	list->fd = 0;
	return (0);
}

static int		ft_checkbuf(char *buf, t_line *list, char **line)
{
	unsigned long long int	i;
	char					*tmp;

	tmp = ft_strdup(*line);
	ft_strdel(line);
	i = (unsigned long long int)ft_strnlen(buf, '\n');
	if (ft_strrchr(buf, '\n'))
	{
		*line = ft_strcjoin(tmp, buf, '\n');
		list->stock = ft_strsub(buf, i + 1, ft_strlen(buf) - i);
		ft_strdel(&buf);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strjoin(tmp, buf);
	ft_strclr(buf);
	ft_strdel(&tmp);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_line	*list = NULL;
	char			*buf;
	long			i;

	i = 0;
	if (!line || !*line || BUFF_SIZE < 1 || fd < 0 || read(fd, 0, 0) ||
		!(*line = ft_strnew(0)) || !(list = ft_initlist(list, fd)))
		return (-1);
	if (list->stock && ft_checkbuf(list->stock, list, line))
		return (1);
	ft_strdel(&list->stock);
	if (!(buf = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((i = read(fd, buf, BUFF_SIZE)))
	{
		buf[i] = '\0';
		if (ft_checkbuf(buf, list, line))
			return (1);
		if (i < BUFF_SIZE)
			return (-1);
	}
	if (ft_end_gnl(list, line, buf))
		return (1);
	return (0);
}


int	main(int ac, char **av)
{
	int	fd;
	int ret;
	char *str;

	ac = 0;
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &str))
		ft_putendl(str);
	close(fd);
	return 0;
}
