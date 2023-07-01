/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:57:48 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/01 17:11:08 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int argc, char *argv[])
{
	int	i; 
	int j;

	j = argc - 1;
	while (argv[j] > argv[0])
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		ft_putchar('\n');
		--j;	
	}

	return 0;
}
