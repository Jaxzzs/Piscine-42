/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 16:07:36 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/14 15:23:51 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		compteur++;
	}
	return (compteur);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int len;
	int compteur;

	dest = (char *)malloc(sizeof(*dest) * (len));
	len = ft_strlen(src);
	compteur = 0;
	while (compteur <= len)
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	return (dest);
}
