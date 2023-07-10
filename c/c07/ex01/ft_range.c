/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 00:04:02 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/10 00:28:31 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	counter;
	if (min >= max)
		return ((void *) 0);
	numbers = (int *)malloc(sizeof(int) * (max));
	counter = 0;
	while (min != (max - 1))
	{
		numbers[counter] = min;
		counter++;
		min++;
	}
	return (numbers);
}
#include <stdio.h>
int	main()
{
	int	numbers = *ft_range(0, 9);

	for(int i = 0; i < 10; i++)
	{
		printf("%d, ", numbers);
		numbers++;
	}
	return (0);
}
