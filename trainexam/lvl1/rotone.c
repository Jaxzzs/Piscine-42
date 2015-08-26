/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 17:44:13 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/26 18:00:42 by mabordas         ###   ########.fr       */
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

	count = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][count] != '\0')
	{
		if (argv[1][count] == 'Z')
		{
			argv[1][count] = 'A';
			ft_putchar(argv[1][count]);
			count++;
		}
		else if (argv[1][count] == 'z')
		{
			argv[1][count] = 'a';
			ft_putchar(argv[1][count]);
			count++;
		}
		else if ((argv[1][count] >= 'A' && argv[1][count] < 'Z') ||
				(argv[1][count] >= 'a' && argv[1][count] < 'z'))
		{
			ft_putchar(argv[1][count] + 1);
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
