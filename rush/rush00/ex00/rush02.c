/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:45:41 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/04 10:45:32 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	len;

	wid = x;
	len = y;
	if (wid < 0 || len < 0)
		return ;
	while (--len >= 0)
	{
		while (--wid >= 0)
		{
			if (((wid == x - 1) || (wid == 0)) && (len == y - 1))
				ft_putchar('A');
			else if (((wid == x - 1) || (wid == 0)) && (len == 0))
				ft_putchar('C');
			else if ((wid < x - 1 && len < y - 1) && (wid > 0 && len > 0))
				ft_putchar(' ');
			else if ((wid < x - 1 && (len == y - 1 || len == 0))
				|| (!((wid == x - 1 || wid == 0) && (len == y - 1 || len == 0))))
				ft_putchar('B');
		}
		wid = x;
		ft_putchar('\n');
	}
}
