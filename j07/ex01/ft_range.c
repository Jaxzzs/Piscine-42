/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 14:29:22 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/24 16:13:07 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int compteur1;
	int compteur2;
	int len;
	int *dest;

	compteur1 = 0;
	compteur2 = min;
	len = max - min;
	dest = malloc(sizeof(*dest) * (len));
	if (dest)
	{
		while (compteur1 != len)
		{
			dest[compteur1] = compteur2;
			compteur1++;
			compteur2++
		}
		return (dest);
	}
	else 
		return (NULL);
}
