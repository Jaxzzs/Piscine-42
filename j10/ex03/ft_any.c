/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 15:32:15 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/18 17:50:04 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int compteur;

	compteur = 0;
	while (tab[compteur])
	{
		if (f(tab[compteur]) == 1)
			return (1);
		compteur++;
	}
	return (0);
}
