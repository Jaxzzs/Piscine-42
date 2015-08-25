/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 16:46:18 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/18 17:45:27 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int compteur;
	int compteur2;

	compteur = 0;
	compteur2 = 0;
	while (tab[compteur])
	{
		if (f(tab[compteur]) == 1)
			compteur2++;
		compteur++;
	}
	return (compteur2);
}
