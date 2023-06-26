/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:18:01 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/25 23:09:04 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
//#include <stdio.h>
//int    main()
//{
//    printf("%i\n", ft_str_is_printable("HELLO"));
//    printf("%i\n", ft_str_is_printable("Hello"));
//    printf("%i\n", ft_str_is_printable("i@ello"));
//    printf("%i\n", ft_str_is_printable("ELLO"));
//    printf("%i\n", ft_str_is_printable(""));
//    printf("%i\n", ft_str_is_printable("  \n\t"));
//}
