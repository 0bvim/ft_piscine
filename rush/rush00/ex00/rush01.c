/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 00:42:07 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/10 01:26:58 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    rush(int x, int y)
{
    int    i;
    int    corner1;
    int    corner2;
    int    corner3;
    int    corner4;

    i = 1;
    corner1 = 1;
    corner2 = x;
    corner3 = x * y - x + 1;
    corner4 = x * y;
    if (x < 0 || y < 0)
        return ;
    while (i <= x * y)
    {
        if (i == corner1 || (i == corner4 && corner4 != corner2
                && corner3 != corner4))
            ft_putchar('/');
        else if (i == corner2 || i == corner3)
            ft_putchar('\\');
        else if (i == corner1 || i == corner3)
            ft_putchar('*');
        else
            ft_putchar(' ');
        if (i % x == 0)
            ft_putchar('\n');
        i++;
    }
}
