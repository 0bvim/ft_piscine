/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:29:19 by vde-frei          #+#    #+#             */
/*   Updated: 2023/06/28 22:16:00 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while (str[i] == to_find [i] && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (str);
}
