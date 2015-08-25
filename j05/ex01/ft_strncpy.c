/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 11:02:38 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/12 23:24:51 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int compteur;
	int nb;

	compteur = 0;
	nb = n;
	while (src[compteur] < nb)
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	if (dest[compteur] == nb)
	{
		return (dest);
	}
}
