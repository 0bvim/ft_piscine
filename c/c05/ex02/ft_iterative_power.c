/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:23:08 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/14 22:41:50 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int total;

	i = 0;
	total = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
//#include <stdio.h>
//int main(void)
//{
//	printf("%d\n", ft_iterative_power(2, 6));
//}
