/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_02_02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 19:30:46 by rfernand          #+#    #+#             */
/*   Updated: 2015/08/23 19:32:10 by rfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		affi_l1_02(int x, int y, char *str, int n)
{
	int i;

	i = 2;
	if (x > 0 & y > 0)
	{
		str[n] = 'A';
		n++;
	}
	while (x > i)
	{
		str[n] = 'B';
		i++;
		n++;
	}
	if (y > 0 & x > 1)
	{
		str[n] = 'A';
		n++;
	}
	return (n);
}

int		affi_mil_02(int x, int y, char *str, int n)
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
			str[n] = 'B';
			n++;
		}
		i = 2;
		while (x > i & y > h)
		{
			str[n++] = ' ';
			i++;
		}
		if (y > h & x > 1)
			str[n++] = 'B';
	}
	return (n);
}

int		affi_fin_02(int x, int y, char *str, int n)
{
	int i;

	i = 2;
	if (y > 1 & x > 0)
	{
		str[n] = 'C';
		n++;
	}
	while (x > i & y > 1)
	{
		i++;
		str[n] = 'B';
		n++;
	}
	if (y > 1 & x > 1)
	{
		str[n] = 'C';
		n++;
	}
	return (n);
}

void	colle_02(int x, int y, char *str)
{
	int n;

	n = affi_l1_02(x, y, str, 0);
	n = affi_mil_02(x, y, str, n);
	n = affi_fin_02(x, y, str, n);
	if (x > 0 & y > 0)
	{
		str[n] = '\n';
		str[n + 1] = '\0';
	}
}
