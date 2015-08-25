/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <fanno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 18:14:56 by fanno             #+#    #+#             */
/*   Updated: 2015/08/09 17:58:37 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_largeur(int x, int y)
{
	int lar;

	lar = 3;
	if (x > 0)
		ft_putchar('o');
	while (lar <= x)
	{
		ft_putchar('-');
		lar++;
	}
	if (x > 1)
		ft_putchar('o');
	if (y > 1)
		ft_putchar('\n');
}

void	ft_hauteur(int x, int y)
{
	int hau;
	int esp;

	hau = 3;
	esp = 3;
	while (hau <= y)
	{
		ft_putchar('|');
		while (esp <= x)
		{
			ft_putchar(' ');
			esp++;
		}
		if (x > 1)
			ft_putchar('|');
		if (y > 1)
			ft_putchar('\n');
		esp = 3;
		hau++;
	}
}

void	colle00(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_largeur(x, y);
	ft_hauteur(x, y);
	if (y > 1)
		ft_largeur(x, y);
}
