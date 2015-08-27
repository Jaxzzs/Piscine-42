/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 11:00:58 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/27 11:58:19 by mabordas         ###   ########.fr       */
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
		count++;
	while (argv[1][count - 1] == ' ')
		count--;
	while (argv[1][count - 1] != ' ')
		count--;
	while (argv[1][count] != '\0')
	{
		if (argv[1][count] == ' ')
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
