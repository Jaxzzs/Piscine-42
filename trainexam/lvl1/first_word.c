/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 19:16:38 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/25 21:39:58 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		if_argc(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	return (0);
}

int		main(int argc, char **argv)
{
	int count;

	count = 0;
	if_argc(argc, argv);
	while (argv[1][count] == ' ' || argv[1][count] == '	')
		count++;
	while (argv[1][count] != '\0')
	{
		if (argv[1][1] == '\0')
		{
			ft_putchar('\n');
			return (0);
		}
		if (argv[1][count] == ' ' || argv[1][count] == '	')
		{
			ft_putchar('\n');
			return (0);
		}
		ft_putchar(argv[1][count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}
