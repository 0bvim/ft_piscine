/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:45:01 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 22:02:54 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str > 64 && *str < 91)
			&& !(*str > 96 && *str < 123))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
//#include <stdio.h>
//int	main()
//{
//	printf("%i\n", ft_str_is_alpha("Hello"));
//	printf("%i\n", ft_str_is_alpha("1Hello"));
//	printf("%i\n", ft_str_is_alpha("i@ello"));
//	printf("%i\n", ft_str_is_alpha("ello"));
//}
