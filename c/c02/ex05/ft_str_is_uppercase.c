/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:14:00 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 21:45:23 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 65 && *str <= 90))
			return (0);
		str++;
	}
	return (1);
}
//#include <stdio.h>
//int    main()
//{
//    printf("%i\n", ft_str_is_uppercase("HELLO"));
//    printf("%i\n", ft_str_is_uppercase("Hello"));
//    printf("%i\n", ft_str_is_uppercase("i@ello"));
//    printf("%i\n", ft_str_is_uppercase("ELLO"));
//    printf("%i\n", ft_str_is_uppercase(""));
//    printf("%i\n", ft_str_is_uppercase("  \n\t"));
//}
