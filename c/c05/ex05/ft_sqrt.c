/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:53:46 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/30 01:53:48 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
	{
		return (0);
	}
	sqrt = 1;
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	return (0);
}
//#include <stdio.h>
//int main(void)
//{
//	for (int test = 0; test < 100; test++)
//	{
//		printf("The sqrt is: %i\n", ft_sqrt(test));
//	}
//}
