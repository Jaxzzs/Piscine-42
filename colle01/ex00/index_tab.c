/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchristo <dchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 12:55:20 by dchristo          #+#    #+#             */
/*   Updated: 2015/08/16 23:32:37 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int		**index_tab(char **argv, int **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	j = -1;
	k = -1;
	while (i++ < 9)
	{
		while (++j < 9)
			if (argv[i][j] == '.')
			{
				tab[++k][0] = i * 10 + j;
				tab[k][1] = nb_line(argv, j) + nb_column(argv, i) +
					nb_bloc(argv, tab[k][0]);
			}
		j = -1;
	}
	tab[++k][0] = -1;
	return (tab);
}

void	sort_index_tab(int **tab)
{
	int i;
	int j;
	int max;
	int cellule;
	int i_save;

	max = tab[0][1];
	j = -1;
	while (tab[++j][0] != -1)
	{
		i = j;
		while (tab[++i][0] != -1)
			if (max < tab[i][1])
			{
				max = tab[i][1];
				i_save = i;
				cellule = tab[i][0];
			}
		tab[i_save][0] = tab[j][0];
		tab[i_save][1] = tab[j][1];
		tab[j][0] = cellule;
		tab[j][1] = max;
		max = -1;
	}
}

int		backtracking(char **argv, int **tab)
{
	int		i;
	int		j;
	char	k;

	k = '0';
	i = *tab[0] / 10;
	j = *tab[0] % 10;
	if (*tab[1] == -1)
		return (1);
	while (++k <= '9')
		if (line(argv, i, k) && column(argv, j, k) &&
			bloc(argv, i, j, k))
		{
			argv[i][j] = k;
			if (backtracking(argv, (tab) + 1))
				return (1);
		}
	argv[i][j] = '.';
	return (0);
}
