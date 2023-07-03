/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 00:42:07 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/03 02:55:48 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_wid(int a)
{
	if (wid + 1 == x || wid == 0)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	print_len(int b)
{
	if (len - 1 == 0)
	{
		ft_putchar('\n');
		ft_putchar('o');
	}
	else if (len > 0)
	{
		ft_putchar('\n');
		ft_putchar('|');
	}
}

void	rush(int x, int y)
{
	int	wid;
	int	len;

	wid = x - 1;
	len = y - 1;
	if (x < 0 || y < 0)
		write (1, "Param < 0", 9);
	if (x == 1 && y == 1)
		ft_putchar('o');
	while (wid >= 0 || len >= 0)
	{
		if (len + 1 == y || len == 0)
			print_wid(wid);
		else
			print_len(len);
		--len;
		--wid;
	}
}
