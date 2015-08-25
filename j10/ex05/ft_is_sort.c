/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 19:07:50 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/24 10:29:00 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int compteur;
	int compteur2;

	compteur = 0;
	compteur2 = 0;
	while (compteur < length - 1)
	{
		if (f(tab[compteur], tab[compteur + 1]) >= 0)
			compteur++;
		else
			compteur = length;
	}
	if (compteur == length - 1)
		return (1);
	return (0);
	while (compteur2 < length - 1)
	{
		if (f(tab[compteur2], tab[compteur2 + 1]) <= 0)
			compteur2++;
		else
			compteur2 = length;
	}
	if (compteur2 = length - 1)
		return (1);
	return (0);
}
