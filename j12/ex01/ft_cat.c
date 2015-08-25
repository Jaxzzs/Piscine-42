/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 17:19:02 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/21 22:32:44 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	ft_putcharer(char c)
{
	write(2, &c, 1);
}

void	ft_putstrer(char *str)
{
	int compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		ft_putcharer(str[compteur]);
		compteur = compteur + 1;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buff;
	int		compteur;

	compteur = 1;
	if (argc == 1 || *argv[1] == '-')
	{
		while (read(0, &buff, 1))
			write(1, &buff, 1);
	}
	while (argc > compteur)
	{
		fd = open(argv[compteur], O_RDONLY);
		if (fd == -1)
		{
			if (errno == ENOENT)
			{
				write(2, "ft_cat: ", 8);
				ft_putstrer(argv[1]);
				write(2, ": No such file or directory\n", 28);
				return (1);
			}
		}
		while (read(fd, &buff, 1))
		{
			if (errno == EISDIR)
			{
				write(2, "ft_cat: ", 8);
				ft_putstrer(argv[1]);
				write(2, ": Is a directory\n", 17);
				return (1);
			}
			write(1, &buff, 1);
		}
		close(fd);
		compteur++;
	}
	return (0);
}
