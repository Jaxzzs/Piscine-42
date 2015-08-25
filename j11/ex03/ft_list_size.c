/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 22:54:31 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/20 11:11:40 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		compteur;

	list = *begin_list;
	compteur = 0;
	if (list != NULL)
	{
		while (list->next != NULL)
		{
			list = list->next;
			compteur++;
		}
	}
	return (compteur);
}
