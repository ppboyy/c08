#include "ft_stock_str.h"
	#include <stdio.h>

int	ft_str_length(char *str);
char	*ft_strdup(char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	int	i;
	struct s_stock_str	*s; // initialise pointer *s to s_stock_str; *s have access to all the variables in s_stock_str

	s = ft_strs_to_tab(argc, argv); // pass S into function
	i = 0;
	while (i < argc)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		printf("original : $%s$ @ %p\n", s[i].str, s[i].str);
		printf("  copied : $%s$ @ %p\n", s[i].copy, s[i].copy);
		printf("    size : %d\n\n", s[i].size);
		i++;
	}
}
