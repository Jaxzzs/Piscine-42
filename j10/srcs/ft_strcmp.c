/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 18:42:10 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 12:06:10 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
