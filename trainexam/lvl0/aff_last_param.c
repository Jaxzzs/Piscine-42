/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 18:05:14 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/25 19:08:29 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int count;
	int count2;

	count = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[(argc - 1)][count] != '\0')
	{
		ft_putchar(argv[argc - 1][count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}
