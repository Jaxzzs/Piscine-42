/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 11:33:55 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/11 22:19:52 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int compteur;

	compteur = 0;
	if (nb == 0)
	{
		return (0);
	}
	while (compteur * compteur < nb)
	{
		compteur++;
	}
	if (nb % compteur == 0)
	{
		return (compteur);
	}
	else
	{
		return (0);
	}
}
