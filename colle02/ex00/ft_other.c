/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 15:04:24 by rfernand          #+#    #+#             */
/*   Updated: 2015/08/23 22:21:34 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(char c)
{
	write(0, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		verify_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') & (str[i] != ' ') & str[i] != '-')
			return (0);
		else if (str[i] >= '0' & str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	while ((str[i] < '0' || str[i] > '9') & (str[i] != '-'))
		i++;
	result = 0;
	if (str[i] == '-')
	{
		while (str[i + 1] >= '0' & str[i + 1] <= '9')
		{
			result = result * 10 + (str[i + 1] - 48);
			i++;
		}
		result = -result;
	}
	else
		while (str[i] >= '0' & str[i] <= '9')
		{
			result = result * 10 + (str[i] - 48);
			i++;
		}
	return (result);
}
