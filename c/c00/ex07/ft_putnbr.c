/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:46:11 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/21 21:13:00 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nbr)
{
	long int nb1;

	nb1 = nbr;
	if (nb1 < 0)
	{
		nb1 *= -1;
	}
	if (nb1 >= 10)
	{
		ft_putnbr(nb1 / 10);
		ft_putnbr(nb1 % 10);
	}
	else
	{
		ft_putchar(nb1 + '0');	
	}
}
