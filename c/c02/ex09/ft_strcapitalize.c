/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:31:03 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/26 00:27:04 by vde-frei         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	*str -= 32;

	while (*str)
	{
		if (((*(str - 1) >= 32 && *(str - 1) <= 47) || 
			(*(str - 1) >= 58 && *(str - 1) <= 64)) &&
			(*(str) >= 97 && *(str) <= 122))
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}
//#include <stdio.h>
//int main(void)
//{
//	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//	ft_strcapitalize(test);
//	printf("%s\n", test);
//}
