/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:25:33 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 21:50:34 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}
//#include <stdio.h>
//
//int main(void)
//{
//  char test[] = "OI TUDO BOM?";
//  
//  ft_strlowcase(test);
//  printf("%s", test);
//}
