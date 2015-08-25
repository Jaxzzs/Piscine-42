/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 15:55:47 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/16 18:19:52 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_affichage(char **argv)
{
	int compteur;
	int compteur2;

	compteur = 1;
	compteur2 = 0;
	while (compteur < 10)
	{
		while (compteur2 < 9)
		{
			ft_putchar(argv[compteur][compteur2]);
			if (compteur2 != 8)
				ft_putchar(' ');
			compteur2++;
		}
		ft_putchar('\n');
		compteur2 = 0;
		compteur++;
	}
}
