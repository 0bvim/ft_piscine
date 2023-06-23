#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 10;
	int b = 2;
	int div;
	int mod;

	div = 0;
	mod = 0;
	
	ft_div_mod(a, b, &div, &mod);

	printf("%i, %i\n", div, mod);
	return (0);
}
