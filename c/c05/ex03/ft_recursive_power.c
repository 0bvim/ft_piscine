/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:43:39 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/30 01:27:18 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power < 1)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power -1));
}
//#include <stdio.h>
//int main(void)
//{
//	printf("%d\n", ft_recursive_power(2, 6));
//}
