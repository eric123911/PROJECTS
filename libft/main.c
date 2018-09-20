#include "includes/libft.h"

#define _AV_ATOI ft_atoi(av[1])

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("Please specify at least an argument.\n");
		return (-1);
	}
	ft_putnbr(ft_atoi("    -42   #@'è_ç"));
	ft_putchar('\n');
	ft_putstr("Hello world !");
	ft_putstr("\n==========================");
	ft_putstr("\nav[1][0] isalnum: "), ft_putnbr(ft_isalnum(_AV_ATOI));
	ft_putstr("\nav[1][0] isalpha: "), ft_putnbr(ft_isalpha(_AV_ATOI));
	ft_putstr("\nav[1][0] isdigit: "), ft_putnbr(ft_isdigit(_AV_ATOI));
	ft_putstr("\nav[1][0] isprint: "), ft_putnbr(ft_isprint(_AV_ATOI));
	ft_putstr("\nav[1][0] isascii: "), ft_putnbr(ft_isascii(_AV_ATOI));

	// Just to suppress [-Werror=unused-parameter]
	av[0] = "";
	return (0);
}
