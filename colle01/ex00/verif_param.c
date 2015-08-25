/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchristo <dchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 12:03:54 by dchristo          #+#    #+#             */
/*   Updated: 2015/08/16 23:06:43 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		under_17_param(char **str)
{
	int i;
	int j;
	int numbers;

	i = 0;
	j = -1;
	numbers = 0;
	while (++j < 10)
	{
		while (str[j][++i] != '\0')
		{
			if (str[j][i] != '.')
				numbers++;
		}
		i = 0;
	}
	if (numbers < 17)
		return (1);
	return (0);
}

int		number_of_param(char **str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < 10)
	{
		while (str[j][i] != '\0')
			i++;
		if (i != 9)
			return (1);
		j++;
	}
	return (0);
}

int		line_and_column_different(char **str, int i, int j, int k)
{
	int l;

	l = 1;
	while (++j < 10)
	{
		while (++i < 8)
			if (str[j][i] != '.')
			{
				while ((str[j][i] != str[j][k] || i == k) && k < 10)
					k++;
				while ((str[j][i] != str[l][i] || j == l) && l < 10)
				{
					l++;
					if (l == 10)
						break ;
				}
				if (l != 10 || k != 10)
					return (1);
				k = i + 1;
				l = 1;
			}
		i = -1;
	}
	return (0);
}
