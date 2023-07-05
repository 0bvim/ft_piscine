/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:55:04 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/05 01:15:33 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	corner1;
	int	corner2;
	int	corner3;
	int	corner4;
	
	i = 1;
	corner1 = 1;
	corner2 = x;
	corner3 = x * y - x + 1;
	corner4 = x * y;
	if (x < 0 || y < 0)
		return ;
	while (i <= x * y)
	{
		if (i == corner1 || i == corner4)
			ft_putchar('A');
		else if (i == corner2 || i == corner3)
			ft_putchar('C');
		else if (i <= x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		if (i % x == 0)
			ft_putchar('\n');
		i++;
	}
}
