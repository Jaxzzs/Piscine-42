/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <fanno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 12:00:51 by fanno             #+#    #+#             */
/*   Updated: 2015/08/09 12:18:39 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_putchar(char c);

unsigned int		ft_largeur1(int x, int y)
{
	int lar;

	lar = 0;
	if (x > 0)
		ft_putchar('A');
	while (lar <= x - 3)
	{
		ft_putchar('B');
		lar++;
	}
	if (x > 1)
		ft_putchar('C');
	if (y > 1)
		ft_putchar('\n');
	return (0);
}

unsigned int		ft_hauteur(int x, int y)
{
	int lar;
	int hau;
	int esp;

	lar = 0;
	hau = 0;
	esp = 0;
	while (hau <= x - 3)
	{
		ft_putchar('B');
		while (esp <= x - 3)
		{
			ft_putchar(' ');
			esp++;
		}
		if (x > 1)
			ft_putchar('B');
		if (y > 1)
			ft_putchar('\n');
		esp = 0;
		hau++;
	}
	return (0);
}

unsigned int		ft_largeur2(int x, int y)
{
	int lar;

	lar = 0;
	if (x > 0)
		ft_putchar('C');
	while (lar <= x - 3)
	{
		ft_putchar('B');
		lar++;
	}
	if (x > 1)
		ft_putchar('A');
	if (y > 1)
		ft_putchar('\n');
	return (0);
}

unsigned int		colle04(int x, int y)
{
	ft_largeur1(x, y);
	ft_hauteur(x, y);
	if (y > 1)
		ft_largeur2(x, y);
	return (0);
}
