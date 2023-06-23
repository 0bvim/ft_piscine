#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {7, 1, 8, 2, 9, 3, 5, 4, 6, 0};
	ft_sort_int_tab(tab, 10);

	for(int i = 0; i < 10; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}
