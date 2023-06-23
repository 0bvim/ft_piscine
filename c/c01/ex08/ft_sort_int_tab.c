/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:22:13 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/23 17:04:52 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int pos;

	pos = 0;
	while (pos < (size - 1))
	{
		if (tab[pos] > tab[pos + 1])
		{
			swap = tab[pos];
			tab[pos] = tab[pos + 1];
			tab[pos + 1] = swap;
			pos = 0;
		}
		else
		{
			pos++;
		}
    }
}
