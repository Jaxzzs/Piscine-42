/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 12:44:14 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/18 16:02:41 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int compteur;

	compteur = 0;
	while (tab[compteur] < length)
	{
		f(tab[compteur]);
		compteur++;
	}
}
