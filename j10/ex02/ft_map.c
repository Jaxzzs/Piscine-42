/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 14:49:26 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/18 16:03:03 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int compteur;
	int *tab2;

	compteur = 0;
	tab2 = (int*)malloc(sizeof(*tab2) * length);
	while (tab[compteur] < length)
	{
		tab2[compteur] = f(tab[compteur]);
		compteur++;
	}
	return (tab2);
}
