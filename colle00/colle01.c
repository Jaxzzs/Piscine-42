/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <fanno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 09:05:29 by fanno             #+#    #+#             */
/*   Updated: 2015/08/09 10:53:39 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_putchar(char c);

unsigned int		ft_largeur1(int x, int y)
{
	int lar;
	int a;

	lar = 0;
	a = 0;
	ft_putchar('/');
	while (lar <= x - 3)
	{
		ft_putchar('*');
		lar++;
	}
	if (x > 1)
		ft_putchar(a + 92);
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
	while (hau <= y - 3)
	{
		ft_putchar('*');
		while (esp <= x - 3)
		{
			ft_putchar(' ');
			esp++;
		}
		if (x > 1)
			ft_putchar('*');
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
	int b;

	lar = 0;
	b = 0;
	ft_putchar(b + 92);
	while (lar <= x - 3)
	{
		ft_putchar('*');
		lar++;
	}
	if (x > 1)
		ft_putchar('/');
	if (y > 1)
		ft_putchar('\n');
	return (0);
}

unsigned int		colle(int x, int y)
{
	ft_largeur1(x, y);
	ft_hauteur(x, y);
	if (y > 1)
		ft_largeur2(x, y);
	return (0);
}
