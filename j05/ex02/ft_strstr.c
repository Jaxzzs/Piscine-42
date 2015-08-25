/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 12:33:01 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/12 23:29:08 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int compteur;

	compteur = 0;
	while (str[compteur] != to_find[])
	{
		compteur++;
	}
	if (str[compteur] == to_find[])
	{
		return  &(str[compteur]);
	}
}
