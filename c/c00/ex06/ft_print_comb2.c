/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 00:17:37 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/21 02:24:38 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_split_nbr(int a, int b)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
		write(1, " ", 1);
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 00;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_split_nbr(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
