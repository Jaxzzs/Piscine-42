/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_column_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <mlevieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 14:38:34 by mlevieux          #+#    #+#             */
/*   Updated: 2015/08/16 23:09:25 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		line(char **argv, int i, char k)
{
	int index;

	index = -1;
	while (++index < 9)
		if (argv[i][index] == k)
			return (0);
	return (1);
}

int		column(char **argv, int j, char k)
{
	int index;

	index = 0;
	while (++index < 10)
		if (argv[index][j] == k)
			return (0);
	return (1);
}

int		bloc(char **argv, int i, int j, char k)
{
	int i3;
	int j3;

	if (i % 3 == 0)
		i3 = i - 3 - 1;
	else
		i3 = i - (i % 3) - 1;
	if (j % 3 == 0)
		j3 = j - 3 - 1;
	else
		j3 = j - (j % 3) - 1;
	i = i3 + 3;
	j = j3 + 3;
	while (++i3 < i)
	{
		while (++j3 < j)
		{
			if (argv[i][j] == k)
				return (0);
		}
		j3 = j - 3;
	}
	return (1);
}
