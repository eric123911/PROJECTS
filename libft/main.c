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
	ft_putendl("");
	ft_putendl("Hello world !");
	ft_putendl("==========================");
	ft_putstr("av[1][0] isalnum: "), ft_putnbr(ft_isalnum(_AV_ATOI));
	ft_putstr("\nav[1][0] isalpha: "), ft_putnbr(ft_isalpha(_AV_ATOI));
	ft_putstr("\nav[1][0] isdigit: "), ft_putnbr(ft_isdigit(_AV_ATOI));
	ft_putstr("\nav[1][0] isprint: "), ft_putnbr(ft_isprint(_AV_ATOI));
	ft_putstr("\nav[1][0] isascii: "), ft_putnbr(ft_isascii(_AV_ATOI));

	ft_putendl("\n==========================\n");
	char *s1 = "RIPerino";
	ft_putstr("strdup test: "), ft_putstr(ft_strdup(s1));

	ft_putstr("\n==========================\n");
	ft_putstr("s1: _test sans newline avec putStr_");
	ft_putendl("s2: _test sans newline avec putEndL_");

	ft_putstr("==========================\n\n\n");
	char s2[150] = "memset test: avec une tres longue chaine de str comme celle-ci";
	ft_memset(s2+13, '*', 49*sizeof(char));
	ft_putendl(s2);
	// Just to suppress [-Werror=unused-parameter]
	av[0] = "";
	return (0);
}
