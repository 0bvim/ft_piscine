/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:51:23 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/29 00:18:06 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nb1;

	nb1 = nb;
	if (nb1 < 0)
	{
		ft_putchar('-');
		nb1 *= -1;
	}
	if (nb1 <= 9)
	{
		ft_putchar(nb1 + '0');
	}
	if (nb1 >= 10)
	{
		ft_putnbr(nb1 / 10);
		ft_putnbr(nb1 % 10);
	}
}
