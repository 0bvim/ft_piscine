/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:00:02 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/25 22:05:19 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	while(*str)
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
#include <stdio.h>
int    main()
{
    printf("%i\n", ft_str_is_numeric("1234"));
    printf("%i\n", ft_str_is_numeric("1H"));
    printf("%i\n", ft_str_is_numeric("i1@ello"));
    printf("%i\n", ft_str_is_numeric("4321"));
    printf("%i\n", ft_str_is_numeric(""));
    printf("%i\n", ft_str_is_numeric("  \n\t"));
}
