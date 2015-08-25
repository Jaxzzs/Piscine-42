/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 22:33:36 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 22:59:39 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		if (str[compteur] >= 'a' & str[compteur] <= 'j')
		{
			str[compteur] += 16;
		}
		if (str[compteur] >= 'k' & str[compteur] <= 'z')
		{
			str[compteur] -= 10;
		}
		if (str[compteur] >= 'A' & str[compteur] <= 'J')
		{
			str[compteur] += 16;
		}
		if (str[compteur] >= 'K' & str[compteur] <= 'Z')
		{
			str[compteur] -= 10;
		}
	}
}
