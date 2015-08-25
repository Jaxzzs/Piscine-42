/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 18:42:10 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/12 23:34:00 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int compteur1;
	int compteur2;

	compteur1 = 0;
	compteur2 = 0;
	while (s1[compteur1] != '\0')
		compteur1++;
	if (s1[compteur1] == '\0')
		return (s1 + compteur1);
	while (s2[compteur2] != '\0')
		compteur2++;
	if (s2[compteur2] == '\0')
		return (s2 + compteur2);
	if ((s1 + compteur1) == (s2 + compteur2))
		return (0);
	if ((s1 + compteur1) > (s2 + compteur2))
		return (1);
	else
		return (-1);
}
