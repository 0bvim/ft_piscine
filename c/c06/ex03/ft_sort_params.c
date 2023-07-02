/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:09:11 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/02 05:10:05 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	return (*str);
}

int	ft_strcmp(char *s, char *s1)
{
	while (*s == *s1 && *s1)
	{
		++s;
		++s1;
	}
	return (*s1 - *s1);
}

void	ft_swap(char **p, char **p1)
{
	char	*tmp;

	tmp = *p, *p = *p1; *p1 = tmp;
}

void	ft_sort(char **argv, int args)
{
	int	j;
	int	k;
	int	len;

	len = args;
	while (len - 1)
	{
		j = 0;
		k = 1;
		while (k < len)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
					ft_swap(&argv[j], &argv[k]);
			++j;
			++k;
		}
		--len;
	}
}

int main (int argc, char *argv[])
{
	ft_sort(argv + 1, argc - 1);
	return 0;
}
