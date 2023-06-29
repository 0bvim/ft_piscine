/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:32:22 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 21:39:58 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	swap;

	pos = 0;
	while (pos < (size / 2))
	{
		swap = tab[pos];
		tab[pos] = tab[size - 1 - pos];
		tab[size - 1 - pos] = swap;
		pos++;
	}
}
