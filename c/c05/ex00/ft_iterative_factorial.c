/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:09:35 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/14 21:20:17 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;
	
	i = 1;
	factorial = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (i <= nb)
		{
			factorial = factorial * i;
			i++;
		}
		return (factorial);
	}
	return (0);
}
//#include <stdio.h>
//int main(void)
//{
//		printf("%i\n", ft_iterative_factorial(4));
//	return 0;
//}
