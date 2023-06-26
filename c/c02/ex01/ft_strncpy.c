/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:14:25 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/25 21:44:01 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && (n - 1) > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}
//#include <stdio.h>
//int	main()
//{
//	char	dest [] = "hello";
//	char	*src = "HeLlo";
//	unsigned int n = 6;
//
//	ft_strncpy(dest, src, n);
//	printf("dest: %s \n", dest);
//}
