/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 17:17:05 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/27 20:08:25 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str)
{
	int count;
	
	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int count;
	int count2;
	int count3;
	int count4;

	count = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[2][count] != '\0')
	{
		if (argv[1][count2] == argv[2][count])
		{
			count2++;
			count++;
		}
		else
			count++;
	}
	count = 0;
	while (argv[1][count] != '\0')
		count++;
	if (count  == count2)
	{
		while (argv[2][count3] != '\0')
		{
			if (argv[1][count4] == argv[2][count3])
			{
				ft_putchar(argv[1][count4]);
				count4++;
				count3++;
			}
			else
				count3++;
		}
	}
	ft_putchar('\n');
	return (0);
}
