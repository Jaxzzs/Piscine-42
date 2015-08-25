/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchristo <dchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 11:37:12 by dchristo          #+#    #+#             */
/*   Updated: 2015/08/16 23:37:56 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"
#include <stdio.h>
#include <stdlib.h>

void	erreur(void)
{
	write(1, "Erreur\n", 7);
}

int		verif_params(char **argv)
{
	int result;
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	k = 1;
	result = 0;
	result = under_17_param(argv);
	result += number_of_param(argv);
	result += line_and_column_different(argv, i, j, k);
	result += ft_bloc(argv);
	result += arg_values(argv);
	if (result >= 1)
		erreur();
	return (reult);
}

int		main(int argc, char **argv)
{
	int **tab;
	int result;
	int i;

	i = 0;
	tab = malloc(sizeof(int *) * 81);
	while (i <= 80)
	{
		tab[i] = malloc(sizeof(int) * 3);
		i++;
	}
	if (argc != 10)
		erreur();
	else
	{
		result = verif_params(argv);
		if ( result < 1)
		{
			tab = index_tab(argv, tab);
			sort_index_tab(tab);
			result = backtracking(argv, tab);
			if (result == 1)
				ft_affichage(argv);
			else
				erreur();
		}
	}
	return (0);
}
