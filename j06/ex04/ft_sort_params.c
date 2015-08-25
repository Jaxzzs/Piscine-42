/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 12:09:44 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 14:08:12 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_strcmp(char *s1, char *s2)
{
	int compteur;

	compteur = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	else if (s1 == 0)
		return (-1);
	else if (s2 == 0)
		return (1);
	while (s1[compteur] == s2[compteur] && s1[compteur] != '\0')
		compteur++;
	return (s1[compteur] - s2[compteur]);
}

int		main(int argc, char **argv)
{
	int compteur;

	compteur = 1;
	if (argc == 0)
		return (0);
