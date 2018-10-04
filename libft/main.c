#include "includes/libft.h"
//#include <bsd/string.h> //
#include <string.h>
#include <stdio.h>

#define _PS			sleep(1)
#define _N			ft_putendl("")
#define _AV_ATOI	ft_atoi(av[1])

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putendl("Please specify at least an argument.");
		return (-1);
	}
	ft_putstr("\033[36;100mTEST SUITE STARTED (please wait)\033[31m");
	ft_putstr(" ."), _PS,
		ft_putstr(" ."), _PS,
		ft_putendl(" .\033[0m"), _PS;
	ft_putnbr(ft_atoi(av[2])), _N;
	ft_putendl("Hello world !");
	ft_putendl("==========================");
	ft_putstr(av[1]), ft_putstr(" isalnum: "), ft_putnbr(ft_isalnum(_AV_ATOI)), _N;
	ft_putstr(av[1]), ft_putstr(" isalpha: "), ft_putnbr(ft_isalpha(_AV_ATOI)), _N;
	ft_putstr(av[1]), ft_putstr(" isdigit: "), ft_putnbr(ft_isdigit(_AV_ATOI)), _N;
	ft_putstr(av[1]), ft_putstr(" isprint: "), ft_putnbr(ft_isprint(_AV_ATOI)), _N;
	ft_putstr(av[1]), ft_putstr(" isascii: "), ft_putnbr(ft_isascii(_AV_ATOI)), _N;

	_N, ft_putendl("==========================");
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
	// devrait afficher abcde (les 5 premiers chars dans s3)
	ft_putstr("memcpy test: "), ft_putendl(s4);

	ft_putendl("==========================");
	// z - a en ascii == 25
	ft_putnbr(ft_memcmp("azb", "aa", 2*sizeof(char))), _N;

	ft_putendl("==========================");
	char *s5 = "abc\0\0\0\0", s6[6];
	// devrait afficher 2 fois "ok.\n"
	ft_strcpy(s6, s5), ft_putstr("ft_strcpy: "), ft_putendl(s6);
	//ft_strncpy(s6, s5, 4), ft_putendl(s6);

	ft_putendl("==========================");
	char s7[3] = "ab", s8[6] = "cdef";
	ft_putendl(ft_strcat(s7, s8));
	char s9[3] = "ab", s10[6] = "cdef";
	ft_putendl(ft_strncat(s9, s10, 3));
	int value = 2;
	char s11[6] = "abcde", s12[2] = "f";
	ft_putnbr(ft_strlcat(s11, s12, value)), _N;
	ft_putendl("Failed test\t V");
	char s13[6] = "abcde", s14[2] = "f";
	ft_putnbr(strlcat(s13, s14, value)), _N;

	ft_putendl("==========================");
	printf("strchr: %s\n", strchr("\0", (char)""));
	printf("ft_strchr: %s\n", ft_strrchr("\0", (char)""));

	ft_putendl("==========================");
	printf("%s\n", strstr("", "iasdas"));
	printf("%s\n", ft_strstr("", "dsfdsf"));


	ft_putendl("==========================");
	printf("%s\n", strnstr("FooBa Bar Baz", "Bar", 9));
	printf("%s\n", ft_strnstr("FooBa Bar Baz", "Bar", 9));

	printf("\n\nft_itoa: %s", ft_itoa(-1234));
	//write(1, ⌦, 1);
	// Just to suppress [-Werror=unused-parameter]
	av[0] = "";
	return (0);
}
