/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 20:54:52 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 22:11:59 by mabordas         ###   ########.fr       */
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
	if (argc == 0)
		return (0);
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
