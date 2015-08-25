/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_strcmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 19:21:01 by rfernand          #+#    #+#             */
/*   Updated: 2015/08/23 22:11:22 by rfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int u;

	i = 0;
	u = s1[i] - s2[i];
	while (s1[i] == s2[i] & s1[i] != '\0')
	{
		i++;
		u = s1[i] - s2[i];
	}
	if (u == 0)
		return (0);
	else if (u > 0)
		return (1);
	else
		return (1);
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

void	afficolle(int x, int y, int i, int n)
{
	if (n != 0)
		write(1, " || ", 4);
	if (i == 0)
		write(1, "[colle-00] ", 11);
	if (i == 1)
		write(1, "[colle-01] ", 11);
	if (i == 2)
		write(1, "[colle-02] ", 11);
	if (i == 3)
		write(1, "[colle-03] ", 11);
	if (i == 4)
		write(1, "[colle-04] ", 11);
	ft_putchar('[');
	ft_putnbr(x);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}
