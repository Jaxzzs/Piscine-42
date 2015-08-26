/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 10:38:03 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/26 13:09:51 by mabordas         ###   ########.fr       */
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
	int result;

	count = 0;
	result = 0;
	while (argv[1][count] != '\0')
	{
		if (argv[1][count] <= 'z' && argv[1][count] >= 'a')
		{
			result = argv[1][count] - 96;
			while (result != 0)
			{
				ft_putchar(argv[1][count]);
				result--;
			}
			count++;
		}
		else if (argv[1][count] <= 'Z' && argv[1][count] >= 'A')
		{
			result = argv[1][count] - 64;
			while (result != 0)
			{
				ft_putchar(argv[1][count]);
				result--;
			}
			count++;
		}
		else
		{
			ft_putchar(argv[1][count]);
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
