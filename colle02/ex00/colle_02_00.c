/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfernand <rfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 19:20:06 by rfernand          #+#    #+#             */
/*   Updated: 2015/08/23 20:31:44 by rfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		affi_l1_00(int x, int y, char *str, int n)
{
	int i;

	i = 2;
	if (x > 0 & y > 0)
	{
		str[n] = 'o';
		n++;
	}
	while (x > i)
	{
		str[n] = '-';
		i++;
		n++;
	}
	if (y > 0 & x > 1)
	{
		str[n] = 'o';
		n++;
	}
	return (n);
}

int		affi_mil_00(int x, int y, char *str, int n)
{
	int h;
	int i;

	h = 1;
	while (y > h & x > 0)
	{
		h++;
		str[n] = '\n';
		n++;
		if (x > 0 & y > h)
		{
			str[n] = '|';
			n++;
		}
		i = 2;
		while (x > i & y > h)
		{
			str[n++] = ' ';
			i++;
		}
		if (y > h & x > 1)
			str[n++] = '|';
	}
	return (n);
}

int		affi_fin_00(int x, int y, char *str, int n)
{
	int i;

	i = 2;
	if (y > 1 & x > 0)
	{
		str[n] = 'o';
		n++;
	}
	while (x > i & y > 1)
	{
		i++;
		str[n] = '-';
		n++;
	}
	if (y > 1 & x > 1)
	{
		str[n] = 'o';
		n++;
	}
	return (n);
}

void	colle_00(int x, int y, char *str)
{
	int n;

	n = affi_l1_00(x, y, str, 0);
	n = affi_mil_00(x, y, str, n);
	n = affi_fin_00(x, y, str, n);
	if (x > 0 & y > 0)
	{
		str[n] = '\n';
		str[n + 1] = '\0';
	}
}
