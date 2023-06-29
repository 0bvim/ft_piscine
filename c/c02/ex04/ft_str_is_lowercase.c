/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:06:45 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 21:44:50 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}
//#include <stdio.h>
//int    main()
//{
//    printf("%i\n", ft_str_is_lowercase("hello"));
//    printf("%i\n", ft_str_is_lowercase("Hello"));
//    printf("%i\n", ft_str_is_lowercase("i@ello"));
//    printf("%i\n", ft_str_is_lowercase("ello"));
//    printf("%i\n", ft_str_is_lowercase(""));
//    printf("%i\n", ft_str_is_lowercase("  \n\t"));
//}
