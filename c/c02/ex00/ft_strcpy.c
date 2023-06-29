/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:17:26 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 22:03:40 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//"walking" positions with a counter
char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
//walking positions with pointers
/*char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}*/
//#include <stdio.h>
//int	main(void)
//{
//	char dest[] = "hi";
//	char src[] = "Hello";
//
//	ft_strcpy(dest, src);
//	printf("%s\n", dest);
//
//}
