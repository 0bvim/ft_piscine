/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:23:11 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/22 00:12:02 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int *digits, int size)
{
	int i;
	int issmall;

	i = 1;
	issmall = 1;
	while (i < issmall)
	{
		if (digits[i - 1] >= digits[i])
		issmall = 0;
		i++;
	}
	if (issmall)
	{
		i = 0;
		while (i < size)
			ft_putchar(digits[i++] + '0');
		if (digits[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}

}

void	ft_print_combn(int n)
{
	int digits[n];
	int i;

	i = 0;
	if (n <= 0 || n > 10)
		write(1, "Choose a number between 0 and 10!!!\n", 36);
	if (n == 1)
	while (i < 10)
		ft_putchar(i++ + '0');
	while (i < n)
		digits[i++] = 0;
	while (digits[0] <= (10 - n) && n > 1)
	{
		ft_print(digits, n);
		digits[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (digits[i] > 9)
			{
				digits[i - 1]++;
				digits[i] = 0;
			}
		}
	}
}
