/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 14:19:06 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/26 17:37:13 by mabordas         ###   ########.fr       */
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
		if ((argv[1][count] >= 'A' && argv[1][count] <= 'M') ||
				(argv[1][count] >= 'a' && argv[1][count] <= 'm'))
		{
			ft_putchar(argv[1][count] + 13);
			count++;
		}
		else if ((argv[1][count] >= 'N' && argv[1][count] <= 'Z') ||
				(argv[1][count] >= 'n' && argv[1][count] <= 'z'))
		{
			ft_putchar(argv[1][count] - 13);
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
