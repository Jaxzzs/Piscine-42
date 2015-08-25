/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <mlevieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 13:10:43 by mlevieux          #+#    #+#             */
/*   Updated: 2015/08/16 20:34:28 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nb_line(char **argv, int line)
{
	int nb_arg;
	int j;

	nb_arg = 0;
	j = -1;
	while (++j < 9)
		if (argv[line][j] >= '1' && argv[line][j] <= '9')
			nb_arg++;
	return (nb_arg);
}

int		nb_column(char **argv, int col)
{
	int nb_arg;
	int i;

	nb_arg = 0;
	i = 0;
	while (++i < 10)
		if (argv[i][col] >= '1' && argv[i][col] <= '9')
			nb_arg++;
	return (nb_arg);
}

int		nb_bloc(char **argv, int position)
{
	int nb_arg;
	int i;
	int j;
	int bi;
	int bj;

	i = position / 10;
	j = position % 10;
	if (i == 9)
		bi = 3;
	else
		bi = i - (i % 3);
	bj = j - (j % 3);
	i = bi - 1;
	while (++i < bi + 3)
	{
		j = bj - 1;
		while (++j < bj + 3)
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				nb_arg++;
	}
	return (nb_arg);
}
