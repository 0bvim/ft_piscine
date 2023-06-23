#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 10;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%i, %i\n", a, b);
	return (0);
}
