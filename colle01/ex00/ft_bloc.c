/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <mlevieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:57:19 by mlevieux          #+#    #+#             */
/*   Updated: 2015/08/16 16:09:22 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		bloc_absent(char c, int x, int y, char **tab)
{
	int bx;
	int by;
	int ct;

	ct = 0;
	bx = 3 * (x / 3) + 1;
	by = 3 * (y / 3);
	y = by;
	while (y < by + 3)
	{
		x = bx;
		while (x < bx + 3)
		{
			if (tab[y][x] == c)
				ct++;
			if (tab[y][x] == c && tab[y][x] != '.' && ct >= 2)
				return (0);
			else
				x++;
		}
		y++;
	}
	return (1);
}

int		ft_bloc(char **tab)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (y < 10)
	{
		while (x < 9)
		{
			if (bloc_absent(tab[y][x], x, y, (tab + 1)))
			{
				x++;
			}
			else
				return (1);
		}
		y++;
	}
	return (0);
}
