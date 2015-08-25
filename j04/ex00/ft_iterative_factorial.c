/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 11:32:10 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/11 01:09:16 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;
	int compteur;

	resultat = nb;
	compteur = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (compteur > 0)
	{
		resultat = resultat * compteur;
		compteur--;
	}
	return (resultat);
}
