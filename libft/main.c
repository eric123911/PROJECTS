#include "includes/libft.h"
#include <stdlib.h>

#define _PS			sleep(1)
#define _AV_ATOI	ft_atoi(av[1])

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("Please specify at least an argument.\n");
		return (-1);
	}
	ft_putstr("\033[36;100mTEST SUITE STARTED (please wait)\033[31m");
	ft_putstr(" ."), _PS,
		ft_putstr(" ."), _PS,
		ft_putendl(" .\033[0m"), _PS;
	ft_putnbr(ft_atoi("    -42   #@'è_ç")), ft_putendl("");
	ft_putendl("Hello world !");
	ft_putendl("==========================");
	ft_putstr("av[1][0] isalnum: "), ft_putnbr(ft_isalnum(_AV_ATOI));
	ft_putstr("\nav[1][0] isalpha: "), ft_putnbr(ft_isalpha(_AV_ATOI));
	ft_putstr("\nav[1][0] isdigit: "), ft_putnbr(ft_isdigit(_AV_ATOI));
	ft_putstr("\nav[1][0] isprint: "), ft_putnbr(ft_isprint(_AV_ATOI));
	ft_putstr("\nav[1][0] isascii: "), ft_putnbr(ft_isascii(_AV_ATOI));

	ft_putendl("\n==========================");
	char *s1 = "RIPerino";
	ft_putstr("strdup test: "), ft_putstr(ft_strdup(s1));

	ft_putendl("\n==========================");
	ft_putstr("*s1: _test sans newline avec putStr_");
	ft_putendl("*s2: _test sans newline avec putEndL_");

	ft_putendl("==========================");
	char s2[150] = "\n\t_memset test: une tres longue chaine de str comme celle-ci ...";
	ft_putstr("avant_"), ft_putendl(s2);
	ft_memset(s2+16, '*', 15*sizeof(char));
	ft_putstr("apres_"), ft_putendl(s2);

	ft_putendl("==========================");
	char s3[27] = "abcdefghijklmnopqrstuvwxyz", *s4;
	s4 = malloc(4*sizeof(char));
	ft_memcpy(s4, s3, 5);
	ft_putstr("memcpy test: "), ft_putendl(s4);

	ft_putendl("==========================");
	ft_putnbr(ft_memcmp("azb", "aa", 2));

	// Just to suppress [-Werror=unused-parameter]
	av[0] = "";
	return (0);
}
