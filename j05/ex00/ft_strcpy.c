/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 15:09:07 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 17:24:31 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int compteur;

	compteur = 0;
	while (src[compteur] != '\0')
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	if (dest[compteur] == '\0')
	{
		return (dest);
	}
}
