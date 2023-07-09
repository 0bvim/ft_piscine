/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 00:35:57 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/09 18:16:15 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	lenght;
	char	*str;

	lenght = 0;
	while (src[lenght])
		lenght++;
	str = (char *)malloc(sizeof(*src) * (lenght + 1));
	i = 0;
	while (i < lenght)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
