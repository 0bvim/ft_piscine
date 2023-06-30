/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:47:24 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/30 18:17:42 by vde-frei         ###   ########.fr       */
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
	(void)argc;

	i = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	return 0;
}
