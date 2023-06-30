/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 02:03:38 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/30 03:07:13 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb <= 0 || nb == 1)
		return (0);
	index = 2;
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
//#include <stdio.h>
//int main(void)
//{
//	for(int test = 0; test < 100; test++)
//	{
//		printf("Numero: %d, é primo: %d\n", test, ft_is_prime(test));
//	}
//}
