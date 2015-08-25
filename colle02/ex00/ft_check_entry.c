/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 15:25:56 by rfernand          #+#    #+#             */
/*   Updated: 2015/08/23 22:11:55 by rfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

int		check_x(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\n' & str[x] != '\0')
		x++;
	return (x);
}

int		check_y(char *str)
{
	int y;
	int n;

	y = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == '\n')
			y++;
		n++;
	}
	return (y);
}

void	test_colle(char *str, int x, int y, int i)
{
	if (i == 0)
		colle_00(x, y, str);
	if (i == 1)
		colle_01(x, y, str);
	if (i == 2)
		colle_02(x, y, str);
	if (i == 3)
		colle_03(x, y, str);
	if (i == 4)
		colle_04(x, y, str);
}

void	ft_putnbr(int i)
{
	if (i > 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + 48);
}

void	ft_check_test_entry(int x, int y, int n)
{
	char	buf[2000000];
	char	*str;
	int		i;
	int		ret;

	i = 0;
	ret = read(0, buf, 1);
	buf[ret] = '\0';
	x = check_x(buf);
	y = check_y(buf);
	str = malloc(sizeof(char *) * (x * y));
	while (i < 5)
	{
		test_colle(str, x, y, i);
		if (!(ft_strcmp(buf, str)))
		{
			afficolle(x, y, i, n);
			n++;
		}
		i++;
	}
	if (i == 5 & n != 0)
		ft_putchar('\n');
	if (i == 5 & n == 0)
		write(1, "aucune\n", 7);
}
