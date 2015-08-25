/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 10:06:33 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 22:14:08 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str)
{
	int compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		ft_putchar(str[compteur]);
		compteur = compteur + 1;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int compteur;

	compteur = 1;
	if (argc == 0)
		return (0);
	while (compteur != argc)
	{
		ft_putstr(argv[compteur]);
		ft_putchar('\n');
		compteur++;
	}
	return (0);
}
